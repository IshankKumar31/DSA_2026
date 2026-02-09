class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] % 2 == 0){
                freq[nums[i]]++;
            }
        }
        int ans=-1;
        int maxfreq=0;

        for(auto p : freq){
            int num= p.first;
            int count= p.second;

            if(count>maxfreq){
                maxfreq=count;
                ans=num;
            }else if(count==maxfreq){
                ans=min(ans,num);
            }
        }

        return ans;


    }
};