class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size = nums.size(); 
        int p = 0;
        int n = 0;
        if(size>=3){
            p = nums[size-1]*nums[size-2]*nums[size-3];
            n = nums[0]*nums[1]*nums[size-1];
        }
        else{
            return -1;
        }
        return max(p,n);
    }
};