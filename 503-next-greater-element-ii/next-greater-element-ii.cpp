class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int len = nums.size();
        vector <int> res(len,-1);
        stack <int> st;
        for(int i = len-1;i>=0;i--){
            st.push(nums[i]);
        }
        for(int i=len-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
            }
            if(st.empty()){
                res[i] = -1;
            }
            else{
                res[i] = st.top();
            }
            st.push(nums[i]);
        }
        return res;
    }
};