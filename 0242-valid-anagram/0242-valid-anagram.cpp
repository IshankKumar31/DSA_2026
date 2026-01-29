class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1= s.size()-1;
        int l2= t.size()-1;
        if(l1!=l2){
            return false;
        }
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);

        for(int i=0;i<s.size();i++){
        
            freq1[s[i]-'a']++;
            freq2[t[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;

    }
};



      
        