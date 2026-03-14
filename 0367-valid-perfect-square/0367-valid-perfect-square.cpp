class Solution {
public:
    bool isPerfectSquare(int num) {
        long long left=0;
        long long right= num;

        while(left <= right){
            long long mid=(left+right)/2;
            long long mul= mid*mid;

            if(mul==num){
                return true;
            }
            else if(mul<num){
                left=mid+1;
            }else{
                right=mid-1;
            }

        }
        return false;
    }
};