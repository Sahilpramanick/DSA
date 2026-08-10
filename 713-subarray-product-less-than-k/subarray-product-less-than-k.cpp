class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int size = nums.size();
        int low = 0;
        int ans = 0;
        int product = 1;
        for (int high =0;high<size;high++){
            product *= nums[high];
            while(product>k && low <=high){
                product /= nums[low];
                low++;
            }
            if(product<k){
                ans += high - low + 1;
            }

        }
        return ans;
        
    }
};