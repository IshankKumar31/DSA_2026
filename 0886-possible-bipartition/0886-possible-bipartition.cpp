class Solution {
public:
    bool check(int start, vector<vector<int>> &adj, vector<int> &color){
        queue<int> q1;
        q1.push(start);

        while(!q1.empty()){
            int u=q1.front();
            q1.pop();

            for(auto v : adj[u]){
                if(color[v]==-1){
                    color[v]= !color[u];
                    q1.push(v);
                }else if(color[u]==color[v]){
                     return false;
                }
                   
            
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> adj(n+1);

        for(auto &e : dislikes){
            int u=e[0];
            int v=e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> color(n+1,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(check(i,adj,color)==false){
                    return false;
                }
            }
        }
        return true;
    }
};