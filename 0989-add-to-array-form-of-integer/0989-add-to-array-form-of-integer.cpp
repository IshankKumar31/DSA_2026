class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size();
        int i= n-1;
        int carry=0;
        vector<int> ans;

        while(i>=0 || k!= 0 || carry !=0){
            int sum=carry;
            if(i>=0){
                sum+=num[i];
                i--;
            }

            if(k != 0){
                sum+= k%10;
                k/=10;
            }

            ans.push_back(sum%10);
            carry= sum/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};