class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();

        queue<pair<int,int>> q1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || i==n-1 || j==0 || j==m-1){
                    if(board[i][j]=='O'){
                        q1.push({i,j});
                        board[i][j]='S';
                    }
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

                if(ni>=0 && ni<n && nj>=0 && nj<m && board[ni][nj]=='O'){
                    board[ni][nj]='S';
                    q1.push({ni,nj});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='S'){
                    board[i][j]='O';
                }else {
                    board[i][j]='X';
                }
            }
        }

    }
};