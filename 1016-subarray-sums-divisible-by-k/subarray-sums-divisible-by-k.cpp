class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int size = nums.size();
        unordered_map<int,int> checkRem;
        checkRem[0]++;
        int res=0;
        int sum = 0;
        for(int i=0;i<size;i++){
            sum += nums[i];
            int rem = sum%k;
            if(rem<0){
                rem = rem + k;
            }
            res+=checkRem[rem];
            checkRem[rem]++;
        }
        return res;
    }
};