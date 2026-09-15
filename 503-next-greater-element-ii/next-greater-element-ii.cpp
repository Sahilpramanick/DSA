class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int len = nums.size();
        vector<int> res(len);

        for(int i = 2 * len - 1; i >= 0; i--) {
            int index = i % len;

            while(!st.empty() && st.top() <= nums[index]) {
                st.pop();
            }
            if(i < len) {
                if(st.empty()) {
                    res[index] = -1;
                }
                else {
                    res[index] = st.top();
                }
            }

            st.push(nums[index]);
        }

        return res;
    }
};

