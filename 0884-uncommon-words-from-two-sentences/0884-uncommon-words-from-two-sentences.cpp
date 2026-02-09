class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> freq;
        string s=s1+" "+s2+" ";
        string word="";

        for(int i=0;i<s.size();i++){
            if(s[i] != ' '){
                word+=s[i];
            }else{
                freq[word]++;
                word="";
            }
        }
        vector<string> ans;
        for(auto p:freq){
            if(p.second==1){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};