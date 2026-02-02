class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> freq;
        int n1= nums1.size();
        int n2= nums2.size();
        vector<int> result;

        for(int i=0;i<n1;i++){
            freq[nums1[i]]++;
        }

        for(int i=0;i<n2;i++){
            if(freq[nums2[i]]>0){
                result.push_back(nums2[i]);
                freq[nums2[i]]=0;
            }
        }
        return result;
    }
};