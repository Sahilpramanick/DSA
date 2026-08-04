class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       int size = nums.size();
       int x = 0;
       if(size==2){
           return nums;
       }
       for(int num : nums){
           x^=num;
       }
       //to stop overall by int_main 
       
       unsigned int ux = static_cast<unsigned int>(x);
       unsigned int mask = ux & -ux;
       int a = 0; 
       int b = 0; 
       for(int num : nums){
           if(mask&num){
               a^=num;
           }
           else{
               b^=num;
           }
       }
       return {a,b};
    }
};