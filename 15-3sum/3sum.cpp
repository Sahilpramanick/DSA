class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<size-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int low = i+1;
            int high = size - 1 ;
            while(low<high){
                int sum = nums[i] + nums[low] + nums[high];
                if(sum==0){
                    res.push_back({nums[i],nums[low],nums[high]});
                    low++;
                    high--;
                    while(low<high && nums[low]==nums[low-1]) low++;
                    while(low<high && nums[high]==nums[high+1]) high--;

                }
                else if(sum>0){
                    high--;
                }
                else{
                    low++;
                }
            }
        }
        return res;

    }
};