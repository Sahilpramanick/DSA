class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int size = nums.size();
        int low = 0;
        int count = 0;
        int len = 0;
        for(int high = 0 ;high<size;high++){
            if(nums[high]==0){
                count++;
            }
            while(count>k){
                if(nums[low]==0){
                    count--;
                }
                low++;
            }
            len = max(len,high-low+1);
        }
        return len;
    }
};