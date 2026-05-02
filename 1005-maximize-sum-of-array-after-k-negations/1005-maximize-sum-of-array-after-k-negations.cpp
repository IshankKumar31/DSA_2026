class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int n=nums.size();

        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        int sum=0;
        while(k>0){
            int x= pq.top();
            pq.pop();
            pq.push(-x);
            k--;
        }
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;

    }
};