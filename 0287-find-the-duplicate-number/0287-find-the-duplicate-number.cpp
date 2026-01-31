class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> freq(*max_element(nums.begin(),nums.end())+1,0);
        int n=nums.size();
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(int i=0;i<freq.size();i++){
            if(freq[i]>1){
                return i;
            }
        }
        return -1;
    }
};