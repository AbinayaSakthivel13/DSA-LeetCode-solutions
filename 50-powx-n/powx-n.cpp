class Solution {
public:
    double myPow(double x, int n) {
        double res=1;
        if(n<0){
            x=1/x;
        }
        long pow=labs(n);
        while(pow){
            if((pow & 1)!=0)
                res*=x;
            x*=x;
            pow>>=1;
        }
        return res;
    }
};