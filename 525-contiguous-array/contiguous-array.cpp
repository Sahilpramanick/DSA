class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int size = nums.size();
        int res = 0;
        unordered_map <int,int> diffCheck;
        for(int i=0;i<size;i++){
            if(nums[i]==1){
                one++;
            }
            else{
                zero++;
            }
            int diff = zero - one;
            if(diff==0){
                res = max(res,i+1);
                continue;
            }
            if(diffCheck.find(diff)==diffCheck.end()){
                diffCheck[diff] = i;
            }
            else{
                int index = i;
                int diffs = index - diffCheck[diff];
                res = max(res,diffs);
            }
        }
        return res;
    }
};