class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //2
        int size = nums.size();
        int total = 0;
        for(int i=0;i<size;i++){
            total+=nums[i];
        }
        int lefts = 0;
        for(int i=0;i<size;i++){
            int rights = total - nums[i] - lefts;
            if(rights == lefts){
                return i;
            }
            lefts+=nums[i];
        }
        return -1;
    }
};