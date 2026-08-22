class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0, pro=1;
        for(int i=n; i>0; i/=10){
            int r=i%10;
            sum+=r;
            pro*=r;
        }
        return n%(sum+pro)==0;
    }
};