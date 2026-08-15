class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr = 0;
        int n = nums.size();
        bool haszero = false;
        for(int x : nums){
            xr ^= x;
            if( x != 0){
                haszero = true;
            }
        }
        if(xr != 0){
            return n;
        }
        if(haszero){
            return n-1;
        }
        return 0;
    }
};