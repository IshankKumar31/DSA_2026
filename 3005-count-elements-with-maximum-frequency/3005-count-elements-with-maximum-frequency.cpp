class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n= nums.size();

        int freq[101]={0};
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        int maxfreq=0;
        for(int i=1;i<=100;i++){
            if(freq[i]>maxfreq){
                maxfreq=freq[i];
            }
        }

        int ans=0;
        for(int i=0;i<=100;i++){
            if(freq[i]==maxfreq){
                ans+=maxfreq;
            }
        }

        return ans;
    }
};