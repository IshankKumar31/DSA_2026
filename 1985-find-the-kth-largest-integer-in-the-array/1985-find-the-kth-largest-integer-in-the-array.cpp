class Compare {
public:
    bool operator()(string a, string b) {
        if(a.size() == b.size())
            return a > b;
        return a.size() > b.size();
    }
};

class Solution {
public:
    
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string, vector<string>,Compare> pq;

        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
            if(pq.size()>k){
                pq.pop();
            }
        }
        
        return pq.top();
    }
};