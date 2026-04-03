class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int ans=0;

        for(auto p : freq){
            int x= p.first;
            if(freq.count(x+1)){
                ans=max(ans,freq[x]+freq[x+1]);
            }
        }
        return ans;
    }
};