class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i]<1 || nums[i]>n-1){
                return false;
            }
            freq[nums[i]]++;
        }
        for(int i=0;i<n-2;i++){
            if(freq[i]>1){
                return false;
            }
        }
        if(freq[n-1] != 2)return false;

        return true;

    }
};