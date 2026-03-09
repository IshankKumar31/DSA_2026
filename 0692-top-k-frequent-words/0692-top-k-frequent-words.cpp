class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> freq;
        int n= words.size();

        for(int i=0;i<n;i++){
            freq[words[i]]++;
        }
        priority_queue<pair<int,string>,
        vector<pair<int,string>>,
        greater<pair<int,string>>> pq;

        for(auto p : freq){
            pq.push({-p.second,p.first});
        }
        vector<string> ans;
        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};