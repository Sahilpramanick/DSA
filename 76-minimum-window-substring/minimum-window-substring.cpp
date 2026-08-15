class Solution {
public:
    bool sahi(vector <int> &first,vector <int> &second){
        for(int i=0;i<256;i++){
            if(first[i]<second[i]){
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        int c1 = s.size();
        int c2 = t.size();
        if(c2>c1) return "";
        vector <int> have(256,0);
        vector <int> need(256,0);
        for(int i=0;i<c2;i++){
            need[t[i]]++;
        }
        int low = 0;
        int res = INT_MAX;
        int start = -1;
        for(int high = 0;high<c1;high++){
            have[s[high]]++;
            while(sahi(have,need)){
                int len = high - low + 1 ;
                if(res>len){
                    res = len;
                    start = low;
                }
                have[s[low]]--;
                low++;
            }
        }
        if(res==INT_MAX){
            return "";
        }
        else {
            return s.substr(start,res);
        }
    }
};