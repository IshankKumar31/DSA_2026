class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                st.pop();
            }else if(operations[i]=="D"){
                int y=st.top();
                
                st.push(y*2);
            }else if(operations[i]=="+"){
                int m= st.top();
                st.pop();
                int n=st.top();
                st.push(m);
                int s= m+n;
                st.push(s);
            }else{
                st.push(stoi(operations[i]));
            }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};