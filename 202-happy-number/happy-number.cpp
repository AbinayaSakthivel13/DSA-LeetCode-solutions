class Solution {
public:
    bool isHappy(int n) {
        int sqr=0;
        if(n==1 || n==7)
            return true;
        while(true){
            while(n>0){
                int rem=n%10;
                sqr+=rem*rem;
                n/=10;
            }
            if(sqr==1)
                return true;
            if(sqr==4)
                return false;
            n=sqr;
            sqr=0;
        }
        return false;
    }
};