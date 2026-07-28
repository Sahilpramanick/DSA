class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int off = 0;
        int cm = 1 ;
        int count = 0;
        int size = nums.size();
        while(cm<nums.size()){
            if(nums[cm]!=nums[off]){
                nums[off+1] = nums[cm];
                cm++;
                off++;
                count++;
            }
            else{
                cm++;
            }
        }
        return off+1;
    }
};