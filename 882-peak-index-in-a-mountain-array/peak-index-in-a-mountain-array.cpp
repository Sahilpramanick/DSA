class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = arr.size();
        int low = 0;
        int high = s - 1;
        int res = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid]>arr[mid+1]){
                high = mid -1;
                res = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return res;
    }
};