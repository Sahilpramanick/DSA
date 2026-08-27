class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxPro = nums[0];
        int minPro = nums[0];
        int ans = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            int x = nums[i];
            int choice1 = maxPro * x;
            int choice2 = minPro * x;
            int newMax = max({x, choice1, choice2});
            int newMin = min({x, choice1, choice2});
            maxPro = newMax;
            minPro = newMin;
            ans = max(ans, maxPro);
        }
        return ans;
    }
};