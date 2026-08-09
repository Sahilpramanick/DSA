class Solution {
  public:
    int longestKSubstr(string &s, int k) {
       int size = s.length();
       int low = 0;
       int res = -1;
       unordered_map<char,int> hash;
       for(int high=0;high<size;high++){
           hash[s[high]]++;
           while(hash.size()>k){
               char ch = s[low];
               hash[ch]--;
               if(hash[ch]==0){
                   hash.erase(ch);
               }
               low++;
           }
           if(hash.size()==k){
               int len = high-low+1;
               res = max(res,len);
           }
       }
       return res;
    }
};