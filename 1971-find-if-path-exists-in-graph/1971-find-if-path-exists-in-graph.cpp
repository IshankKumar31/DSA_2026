class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);

        for(auto &e : edges){
            int u=e[0];
            int v=e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        queue<int> q1;
        vector<bool> visited(n,false);
        q1.push(source);
        visited[source]=true;

        while(!q1.empty()){
            int u= q1.front();
            q1.pop();

            if(u==destination)return true;

            for(auto v : adj[u]){
                if(!visited[v]){
                    visited[v]=true;
                    q1.push(v);
                }
            }
        }
        return false;
    }
};