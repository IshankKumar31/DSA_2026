class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> visited(26,0);
        for(int i=0;i<s.size();i++){
            visited[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(visited[s[i]-'a']==1){
                return i;
            }
        }

        return -1;
        
    }
};