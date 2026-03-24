class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> arr;
        int mod = 12345;

     
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr.push_back(grid[i][j]);
            }
        }

        int l = arr.size();
        vector<int> ans(l);

     
        ans[0] = 1;
        for(int i=1;i<l;i++){
            ans[i] = ((long long)ans[i-1] * arr[i-1]) % mod; 
        }

 
        int suffix = 1;
        for(int i=l-1;i>=0;i--){
            ans[i] = (ans[i] * suffix) % mod;
            suffix = ((long long)suffix * arr[i]) % mod;      
        }

    
        int k = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j] = ans[k++];
            }
        }

        return grid;
    }
};