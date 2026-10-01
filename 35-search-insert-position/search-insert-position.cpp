class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        for(int i = 0;i < nums.size();i++){
            int mid = (low + high)/2;
            if(target < nums[mid]){
                high = mid-1;
            }else if(target > nums[mid]){
                low = mid+1;
            }else{
                return mid;
            }
        }
        return low;
    }
};