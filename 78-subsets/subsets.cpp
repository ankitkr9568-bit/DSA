class Solution {
private:
    void solve(int ind,vector<int>& temp,int n,vector<vector<int>>& ans,vector<int>& nums){
        if(ind == n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        solve(ind + 1,temp,n,ans,nums);
        temp.pop_back();
        solve(ind + 1,temp,n,ans,nums);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0,temp,n,ans,nums);
        return ans;
    }
};