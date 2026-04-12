class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>> pq;

        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++){
           pq.push({nums1[i]+nums2[0],{i,0}});
        }
        vector<vector<int>> ans;
        for(int m=0;m<k;m++){
            auto it= pq.top();
            pq.pop();

            int i=it.second.first;
            int j=it.second.second;
            ans.push_back({nums1[i],nums2[j]});
            if(j+1 < nums2.size()){
                pq.push({nums1[i]+nums2[j+1],{i,j+1}});
            }
            
        }
        return ans;
    }
};