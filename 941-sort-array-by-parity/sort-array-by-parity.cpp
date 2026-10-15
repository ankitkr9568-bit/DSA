class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int l = n-1;
        while(s < l){
            if(nums[s]%2 == 0){
                s++;
            }
            else if(nums[l]%2 == 1){
                l--;
            }
            else if(nums[s]%2 == 1 && nums[l]%2 == 0){
                swap(nums[s],nums[l]);
                s++;
                l--;
            }
        }
        return nums;
    }
};