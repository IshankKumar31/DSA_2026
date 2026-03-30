class Solution {
public:
    void dfs(int i,int j,vector<vector<bool>>&visited,vector<vector<int>>& grid,int n,int m,int &count){
        if(i<0 || j<0 || i>=n || j>=m || visited[i][j] || grid[i][j] != 1){
            return;
        }

        count++;
        visited[i][j]=true;

        dfs(i-1,j,visited,grid,n,m,count);
        dfs(i,j+1,visited,grid,n,m,count);
        dfs(i+1,j,visited,grid,n,m,count);
        dfs(i,j-1,visited,grid,n,m,count);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<bool>> visited(n,vector<bool>(m,false));
        int maxcount=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count=0;
                if(grid[i][j]==1 && !visited[i][j]){
                    dfs(i,j,visited,grid,n,m,count);
                    maxcount=max(maxcount,count);
                }
            }
        }
        return maxcount;
    }
};