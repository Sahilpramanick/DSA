class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inter, vector<int>& newInt) {
        int n = inter.size();
        vector<vector<int>> res;
        vector<vector<int>> res1;
        bool inserted = false;
        for(int i=0;i<n;i++){
            int start = inter[i][0];
            if(inserted==false && newInt[0]<start){
                res.push_back(newInt);
                inserted = true;
            }
            res.push_back({inter[i][0],inter[i][1]});
        }
        if(inserted==false){
            res.push_back(newInt);
        }
        int start1 = res[0][0];
        int end1 = res[0][1];
        for(int i=1;i<res.size();i++){
            int start2 = res[i][0];
            int end2 = res[i][1];
            if(end1>=start2){
                end1 = max(end1,end2);
                continue;
            }
            res1.push_back({start1,end1});
            start1 = start2;
            end1 = end2;
        }
        res1.push_back({start1,end1});
        return res1;
    }
};