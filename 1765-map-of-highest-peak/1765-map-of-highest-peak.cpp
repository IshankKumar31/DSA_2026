class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int n= isWater.size();
        int m=isWater[0].size();
        queue<pair<int,int>> q1;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isWater[i][j]==1){
                    q1.push({i,j});
                    isWater[i][j]=0;
                }else{
                    isWater[i][j]=-1;
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

                if(ni>=0 && ni<n && nj>=0 && nj<m && isWater[ni][nj]==-1){
                    isWater[ni][nj]=isWater[x][y]+1;
                    q1.push({ni,nj});
                }
            }
        }
        return isWater;
    }
};