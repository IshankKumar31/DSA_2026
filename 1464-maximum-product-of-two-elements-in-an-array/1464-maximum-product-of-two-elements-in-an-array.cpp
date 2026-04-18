class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        int n=nums.size();

        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        int max1=0;
        int max2=0;

        max1=pq.top();
        pq.pop();
        max2=pq.top();

        return ((max1-1)*(max2-1));
    }
};