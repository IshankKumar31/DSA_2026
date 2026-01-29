class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string result="";
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                result.push_back(tolower(s[i]));

            }
        }
            

            int i=0;
            int j=result.size()-1;
            while(i<j){
                if(result[i] != result[j]){
                    return false;
                }
                i++;
                j--;
            }
        

        return true;
    }
};