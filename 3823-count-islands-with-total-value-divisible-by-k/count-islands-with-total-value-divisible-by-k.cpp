class Solution {
private:
    long long bfs(int i,int j,vector<vector<int>> &vis,vector<vector<int>> &grid){
        vis[i][j] = 1;
        queue<pair<int,int>> q;
        q.push({i,j});
        int n = grid.size();
        int m = grid[0].size();
        long long sum = grid[i][j];

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            int delrow[] = {-1,0,1,0};
            int delcol[] = {0,1,0,-1};
            for(int i = 0;i < 4;i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if(ncol >= 0 && ncol < m && nrow >= 0 && nrow < n && !vis[nrow][ncol] && grid[nrow][ncol] != 0){
                    sum += grid[nrow][ncol];
                    vis[nrow][ncol] = 1;
                    q.push({nrow,ncol});
                }
            }
        }
        return sum;
    }
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int cnt = 0;
        long long sum = 0;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if(!vis[i][j] && grid[i][j] != 0){
                    sum = bfs(i,j,vis,grid);
                    if(sum % k == 0){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};