class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for(int num:nums){
            total += num;
        }
        int left = 0;
        
        int s = nums.size();
        for(int i = 0;i<s;i++){
            int right = total - left - nums[i];
            if(right==left){
                return i;
            }
            left += nums[i];
            
        }
        return -1;
        
        
        
    }
};