class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int minlen=INT_MAX;
        int sum=0;

        for(int right=0;right<n;right++){
            
            
            int len=0;
            sum+=nums[right];
            while(sum>=target){
                sum-=nums[left];
                len= right-left+1;
                minlen=min(minlen,len);
                left++;
            }
            
        }
        if(minlen==INT_MAX){
            return 0;
        }else{
            return minlen;
        }
    }
};