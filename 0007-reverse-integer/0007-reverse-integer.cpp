class Solution {
public:
    int reverse(int x) {
        int n;
        long long int rev=0;
        while(x!=0){
            n=x%10;
            if (rev > INT_MAX/10 || (rev == INT_MAX/10 && n > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN/10 && n < -8)) return 0;
            rev=rev*10+n;
            x=x/10;
            

        }
        return rev;
        
    }
};