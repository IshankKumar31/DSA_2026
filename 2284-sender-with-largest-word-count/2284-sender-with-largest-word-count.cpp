class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string,int> freq;

        for(int i = 0; i < messages.size(); i++){
            int wordcount = 1;
            for(char c : messages[i]){
                if(c == ' ') wordcount++;
            }
            freq[senders[i]] += wordcount;
        }

        priority_queue<pair<int,string>> pq;

        for(auto it : freq){
            pq.push({it.second, it.first});
        }

        return pq.top().second;
    }
};