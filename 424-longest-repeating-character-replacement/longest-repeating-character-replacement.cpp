class Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0;
        int arr[256] = {0}; // intiliased all value to 0 
        int size = s.length();
        int res = INT_MIN;
        for(int high = 0;high<size;high++){
            arr[s[high]]++;
            int len = high-low+1;
            int freq = *max_element(arr,arr+256);
            while((len - freq)>k){
                arr[s[low]]--;
                low++;
                len = high-low + 1;
                freq = *max_element(arr,arr+256);
            }
            res = max(len,res);
        }
        return res;
    }
};