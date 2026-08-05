class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int s = nums.size();
        int bada = nums[0];
        int chota = nums[s-1];
        int left = -1 ;
        int right = -1;
        for(int i=1;i<s;i++){
            if(nums[i]<bada){
                right = i;
            }
            else{
                bada = nums[i];
            }
        }
        for(int i=s-2;i>=0;i--){
            if(nums[i]>chota){
                left = i;
            }
            else{
                chota = nums[i];
            }
        }
        if(right==-1){
            return 0;
        }
        else{
            return right - left + 1;
        }
        
    }
};