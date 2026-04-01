class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size();
        int dist=k;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                if(dist<k){
                    return false;
                }
                dist=0;
            }else{
                dist++;
            }
        }
        return true;
    }
};