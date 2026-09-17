class Solution {
private:
    void solve(int ind,vector<int>& temp,set<vector<int>>& st,int n,vector<int>& nums){
        if(ind == n){
            st.insert(temp);
            return;
        }
        temp.push_back(nums[ind]);
        solve(ind + 1,temp,st,n,nums);
        temp.pop_back();
        solve(ind + 1,temp,st,n,nums);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> st;
        vector<int> temp;
        solve(0,temp,st,n,nums);
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};