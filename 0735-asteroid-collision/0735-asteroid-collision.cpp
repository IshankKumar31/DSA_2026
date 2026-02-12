class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n= asteroids.size();

        for(int i=0;i<n;i++){
            int a= asteroids[i];
            while(!st.empty() && st.top()>0 && a<0){
                if(abs(st.top()) < abs(a)){
                    st.pop();
                }else if(abs(st.top()) == abs(a)){
                    st.pop();
                    a=0;
                }else{
                    a=0;
                }

            }
            if(a != 0){
                st.push(a);
            }
        }
        vector<int> ans(st.size());
        int n1=st.size();
        for(int i=n1-1;i>=0;i--){
            ans[i]=st.top();
            st.pop();
        }

        return ans;
        

    }
};