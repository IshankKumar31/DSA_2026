class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> freq1;
        unordered_map<int,int> freq2;
        int n1=nums1.size();
        int n2=nums2.size();

        for(int i=0;i<n1;i++){
            freq1[nums1[i]]++;
        }
        for(int i=0;i<n2;i++){
            freq2[nums2[i]]++;
        }

        vector<int> ans1;
        vector<int> ans2;

        for(int i=0;i<n2;i++){
            if(freq1[nums2[i]]==0){
                ans2.push_back(nums2[i]);
                freq1[nums2[i]]=1;
            }
        }
        for(int i=0;i<n1;i++){
            if(freq2[nums1[i]]==0){
                ans1.push_back(nums1[i]);
                freq2[nums1[i]]=1;
            }
        }

        return {ans1,ans2};
        
    }
};