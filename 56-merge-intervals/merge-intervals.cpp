class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& dukaan) {
        vector<vector<int>> res;
        sort(dukaan.begin(),dukaan.end());
        int start1 = dukaan[0][0];
        int end1 = dukaan[0][1];
        int n = dukaan.size();
        for(int i=1;i<n;i++){
            int start2 = dukaan[i][0];
            int end2 = dukaan[i][1];
            if(end1>=start2){
                // start1 = start1;
                end1 = max(end1,end2);
                continue;
            }
            res.push_back({start1,end1});
            start1 = start2;
            end1 = end2;
        }
        res.push_back({start1,end1});
        return res;
    }
};