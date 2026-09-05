class Solution {
private:
    void dfs(int node,vector<vector<int>>& adj,vector<int>& vis){
        vis[node] = 1;
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<vector<int>> adj(isConnected.size());
        for(int i = 0;i < isConnected.size();i++){
            for(int j = 0;j < isConnected[i].size();j++){
                if((isConnected[i][j] == 1) && (i != j)){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int v = adj.size();
        int cnt = 0;
        vector<int> vis(v,0);
        for(int i = 0;i < v;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,adj,vis);
            }
        }
        return cnt;
    }
};