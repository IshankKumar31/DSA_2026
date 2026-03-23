class Solution {
public:
    bool dfs(int curr,vector<vector<int>> &adj,vector<bool> &visited,vector<bool> &rec){
        visited[curr]=true;
        rec[curr]=true;

        for(int v : adj[curr]){
            if(!visited[v]){
                if(!dfs(v,adj,visited,rec))return false;
            }
            else if(rec[v]){
                return false;
            }
        }
        rec[curr]=false;
        return true;

    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto &e : prerequisites){
            int u=e[0];
            int v=e[1];

            adj[u].push_back(v);
        }
        vector<bool> visited(numCourses,false);
        vector<bool> rec(numCourses,false);

        for(int i=0;i<numCourses;i++){
            if(!visited[i]){
                if(!dfs(i,adj,visited,rec))return false;
            }
        }

        return true;
    }
};
           

