// class Solution {
// public:
//     string reverseWords(string s) {
//         int n=s.size();
//         reverse(s.begin(),s.end());
//         string ans= "";

//         for(int i=0;i<n;i++){
//             string word="";
//             while(i<n && s[i] != ' '){
//                 word+=s[i];
//                 i++;
//             }
                
//             reverse(word.begin(),word.end());
//             if(word.size() > 0){
//                 ans+= ' '+word;
//             }
//         }

//         return ans.substr(1);
//     }
// };



class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word="";

        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                word+= s[i];
            }else{
                if(word != ""){
                    st.push(word);
                }
                word="";
            }
        }
        if(word != ""){
            st.push(word);
        }
        string res="";
        while(!st.empty()){
            
            res +=" "+st.top();
            st.pop();
        }
        return res.substr(1);
    }
};