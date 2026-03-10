class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        for(auto p : freq){
            if(p.second ==1){
                return p.first;
            }
        }
        return -1;
    }
};