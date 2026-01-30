class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long int r=1;
        while(r<n){
            r*=2;

        }

        if(r==n)return true;
        else return false;
    }
};