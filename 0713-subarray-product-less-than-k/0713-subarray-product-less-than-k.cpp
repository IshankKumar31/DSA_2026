class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)return 0;
        int n=nums.size();
        int left=0;
        int count=0;
        long long mul= 1;

        for(int right=0;right<n;right++){
            mul=mul*nums[right];

            while(mul >=k){
                mul =mul/nums[left];
                left++;
            }
            count+= (right-left)+1;
        }
        return count;
    }
};