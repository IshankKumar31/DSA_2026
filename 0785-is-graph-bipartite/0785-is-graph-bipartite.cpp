class Solution {
public:
    bool check(int start,vector<vector<int>> &graph,vector<int> &color){
        queue<int> q1;
        q1.push(start);

        while(!q1.empty()){
            int v=q1.front();
            q1.pop();

            for(auto it : graph[v]){
                if(color[it]==-1){
                    color[it]=!color[v];
                    q1.push(it);
                }
                else if(color[it]==color[v]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<int> color(V,-1);
        for(int i=0;i<V;i++){
            if(color[i]==-1){
                if(check(i,graph,color)==false){
                    return false;
                }
            }
        }
        return true;
    }
};