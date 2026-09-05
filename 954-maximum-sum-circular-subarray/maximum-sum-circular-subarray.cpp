class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;
        int currentMax = 0;
        int currentMin = 0;
        int maxSum = INT_MIN;
        int minSum = INT_MAX;

        for (int value : nums) {
            total += value;

            currentMax += value;
            maxSum = max(maxSum, currentMax);

            if (currentMax < 0) {
                currentMax = 0;
            }

            currentMin += value;
            minSum = min(minSum, currentMin);

            if (currentMin > 0) {
                currentMin = 0;
            }
        }

        if (total == minSum) {
            return maxSum;
        }

        return max(maxSum, total - minSum);
    }
};