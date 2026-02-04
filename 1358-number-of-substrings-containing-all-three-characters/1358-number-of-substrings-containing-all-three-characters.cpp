class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> freq;
        int n=s.size();
        int left=0;
        int count=0;

        for(int right=0;right<n;right++){
            freq[s[right]]++;
           
            while(freq['a']>=1 && freq['b']>=1 && freq['c']>=1){
                count+=(n-right);
                freq[s[left]]--;
                left++;
                
            }
        }
        return count;

        
    }
};