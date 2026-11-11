class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = nums.size();
        int low = 0;
        int high = s - 1;
        int res = INT_MAX;

        while(low <= high) {
            int mid = low + (high - low)/2;

            if(nums[mid] > nums[high]) {//part 2
                low = mid + 1;
            }
            else {
                res = min(res, nums[mid]); //part1
                high = mid - 1;
            }
        }
        return res;
    }
};