class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {

        auto comp = [](string a, string b){
            return a.size() > b.size() || 
                  (a.size() == b.size() && a > b);
        };

        priority_queue<string, vector<string>, decltype(comp)> pq(comp);

        for(string s : nums){
            pq.push(s);
            if(pq.size() > k){
                pq.pop();
            }
        }

        return pq.top();
    }
};