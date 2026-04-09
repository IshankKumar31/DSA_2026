class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev = 0;
        int i = 0, n = s.size();
        
        while(i < n){
            if(isdigit(s[i])){
                int val = 0;
                
                while(i < n && isdigit(s[i])){
                    val = val * 10 + (s[i] - '0');
                    i++;
                }
                
                if(val <= prev) return false;
                prev = val;
            } else {
                i++;
            }
        }
        
        return true;
    }
};