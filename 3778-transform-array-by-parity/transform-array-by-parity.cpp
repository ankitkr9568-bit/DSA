class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int l = n-1;
        while(s < n){
            if(nums[s]%2 == 0){
                nums[s] = 0;
                s++;
            }
            else if(nums[s]%2 == 1){
                nums[s] = 1;
                s++;
            }
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};