class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int minending = nums[0];
        int maxending = nums[0];
        int res = abs(nums[0]);

        for (int i = 1; i < nums.size(); i++) {
            int v1 = nums[i];
            int v2 = maxending + nums[i];
            int v3 = minending + nums[i];

            maxending = max(v1, v2);
            minending = min(v1, v3);

            res = max(res, max(abs(maxending), abs(minending)));
        }

        return res;
    }
};