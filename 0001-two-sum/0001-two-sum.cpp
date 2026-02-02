class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        int n=nums.size();

        for(int i=0;i<n;i++){
            int first=nums[i];
            int second= target-first;

            if(map.find(second) != map.end()){
                return {map[second],i};
            
            }
            map[first]=i;
        }
        return {};
    }
};