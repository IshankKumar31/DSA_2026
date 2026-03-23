class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<int,int>> q1;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q1.push({i,j});
                }else{
                    mat[i][j]=-1;
                }
            }
        }
        vector<int> di={-1,1,0,0};
        vector<int> dj={0,0,-1,1};

        while(!q1.empty()){
            int x=q1.front().first;
            int y=q1.front().second;
            q1.pop();

            for(int k=0;k<4;k++){
                int ni=x+di[k];
                int nj=y+dj[k];

                if(ni>=0 && ni<n && nj>=0 && nj<m && mat[ni][nj]==-1){
                    mat[ni][nj]=mat[x][y]+1;
                    q1.push({ni,nj});
                }
            }
        }
        return mat;

    }
};