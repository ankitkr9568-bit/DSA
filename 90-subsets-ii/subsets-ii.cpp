class Solution {
private:
    void solve(int ind,int n,vector<int>& nums,vector<vector<int>>& ans,vector<int> ds){
        ans.push_back(ds);
        for(int i = ind;i < n;i++){
            if(i != ind && nums[i] == nums[i-1]) continue;
            ds.push_back(nums[i]);
            solve(i +1,n,nums,ans,ds);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0,n,nums,ans,ds);
        return ans;
    }
};