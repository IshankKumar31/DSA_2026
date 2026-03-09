class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n=nums.size();

        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        priority_queue<pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>> pq;

        for(auto p : freq){
            pq.push({p.second,-p.first});

        }
        vector<int> ans;
        while(!pq.empty()){
            auto x = pq.top();
            pq.pop();

            for(int i=0;i<x.first;i++){
                ans.push_back(-x.second);
            }
        }
        return ans;

    }
};