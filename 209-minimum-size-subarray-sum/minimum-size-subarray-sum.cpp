class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX;
        int low = 0;
        int high = 0; 
        int size = nums.size();
        int sum = 0; 
        while(high<size){
            sum += nums[high];
            high++;
            while(sum>=target){
                int len = high - low ;
                low++;
                sum = sum - nums[low-1];
                res = min(res,len);
            }
       }
       if(res==INT_MAX){
           return 0;
       }
       else{
           return res;
       }
        
    }
};