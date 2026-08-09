class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        int low = 0;
        int res = 0;
        unordered_map<char,int> h;
        for(int high=0;high < size;high++){
            h[s[high]]++;
            while(h[s[high]]>1){
                char c = s[low];
                h[c]--;
                if(h[c]==0){
                    h.erase(c);
                }
                low++;
            }
            int k = high - low + 1;
            res = max(k,res);
            
        }
        return res;
    }
};