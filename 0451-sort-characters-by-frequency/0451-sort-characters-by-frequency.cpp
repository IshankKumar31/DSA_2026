class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto p : freq){
            pq.push({p.second,p.first});
        }
        string ans="";
        while(!pq.empty()){
            for(int i=0;i<pq.top().first;i++){
                ans.push_back(pq.top().second);
            }
            
            pq.pop();
        }

        return ans;
    }
};