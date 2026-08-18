class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int miss = 0;
        sort(nums.begin(),nums.end());
        for(int i = 1;i <= n;i++){
            if(i != nums[i-1]){
                miss = i;
            }
        }
        return miss;
    }
};