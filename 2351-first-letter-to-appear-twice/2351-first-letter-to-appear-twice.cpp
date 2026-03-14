class Solution {
public:
    char repeatedCharacter(string s) {
        vector<bool> seen(256,false);

        for(int i=0;i<s.size();i++){
            if(seen[s[i]]){
                return s[i];
            }

            seen[s[i]]=true;
        }
        return ' ';
    }
};