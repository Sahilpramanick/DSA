class Solution {
public:
    int totalFruit(vector<int>& fruits) {
          int low = 0;
          int res = INT_MIN;
          int k = 2;
          int size = fruits.size();
          unordered_map<int,int> hash;
          for(int high=0;high<size;high++){
                hash[fruits[high]]++;
                while(hash.size()>k){
                    hash[fruits[low]]--;
                    if(hash[fruits[low]]==0){
                        hash.erase(fruits[low]);
                    }
                    low++;
                }
                int len = high - low + 1;
                res = max(len,res);
          }
          return res;

    }
};