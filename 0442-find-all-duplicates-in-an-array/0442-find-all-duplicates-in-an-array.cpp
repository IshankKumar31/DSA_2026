class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        for(auto p:freq){
            if(p.second == 2){
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};