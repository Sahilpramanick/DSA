class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int best = nums[0];
        int ans = nums[0];
        for(int i=1;i<size;i++){
            int choice1 = best + nums[i];
            int choice2 = nums[i];
            best = max(choice1 , choice2);
            ans = max(best,ans);
        }
        return ans;
    }
};