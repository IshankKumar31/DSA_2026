class Solution {
public:
    int digits(int n){
        int digit=0;
        while(n!=0){
            digit++;
            n/=10;
        }
        return digit;
    }
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int x=0;
        for(int i=0;i<n;i++){
            int digit=nums[i];
            x=digits(digit);
            if(x%2==0){
                count++;
            }
        }
        return count;
    }
};