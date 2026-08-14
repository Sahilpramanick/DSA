class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        if(n1>n2){
            return false;
        }
        unordered_map<char,int> c1;
        unordered_map<char,int> c2;
        for(int i=0;i<n1;i++){
            c1[s1[i]]++;
            c2[s2[i]]++;
        }
        if(c1==c2){
            return true;
        }
        for(int i =n1;i<n2;i++){
            c2[s2[i]]++;
            c2[s2[i-n1]]--;
            if(c2[s2[i-n1]] == 0){
                c2.erase(s2[i-n1]);
            }
            if(c1==c2){
                return true;
            }
        }
        return false;

    }
};