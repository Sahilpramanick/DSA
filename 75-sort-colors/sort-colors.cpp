class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int low = 0;
        int mid = 0;
        int high = size - 1;
        while(mid<=high){
            if(nums[mid]==2){
                swap(nums[high],nums[mid]);
                high--;
            }
            else if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else{
                mid++;
            }
        }
    }
};