class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> freq;
        unordered_set<string> st;
        string word="";
        for(int i=0;i<banned.size();i++){
            st.insert(banned[i]);
        }
        for(char &c : paragraph){
            if(isalpha(c))c=tolower(c);
            else c= ' ';
        }
        for(int i=0;i<paragraph.size();i++){
            
            if(paragraph[i] != ' '){
                word+=paragraph[i];
            }else if(word != ""){
                if(!st.count(word)){
                    freq[word]++;
                }
                word="";
                
            }
        }
        if(word != ""){
            if(!st.count(word)){
                freq[word]++;
            }
        }
        int maxi=INT_MIN;
        string ans="";

        for(auto it : freq){
            if(it.second > maxi){
                maxi=it.second;
                ans=it.first;
            }
        }
        return ans;


        
    }
};