class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.size();
        stack<pair<char,int>> st;
        for(int i=0;i<n;i++){
            char c= s[i];
            if(!st.empty() && st.top().first==c){
                st.top().second++;
                if(st.top().second == k){
                    st.pop();
                }
            }else{
                st.push({c,1});
            }
        }

        string res="";
        while(!st.empty()){
            int x=st.top().second;
            char a=st.top().first;
            st.pop();
            for(int i=0;i<x;i++){
                res.push_back(a);
            }
        }
        reverse(res.begin(),res.end());
        return res;

    }
};