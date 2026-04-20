class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        int n=nums.size();
        unordered_map<int ,int> freq;
        long long sum=0;
        long long maxsum=0;

        for(int i=0;i<k;i++){
            freq[nums[i]]++;
            sum+=nums[i];
        }
        if(freq.size()>=m){
            maxsum=max(sum,maxsum);
        }

        for(int i=k;i<n;i++){
            freq[nums[i-k]]--;
            if(freq[nums[i-k]]==0){
                freq.erase(nums[i-k]);
            }
            sum-=nums[i-k];
            freq[nums[i]]++;
            sum+=nums[i];

            if(freq.size()>=m){
                maxsum=max(sum,maxsum);
            }
        }
        return maxsum;
    }
};