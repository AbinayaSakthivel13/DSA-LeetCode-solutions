class Solution {
public:
    int reverse(int x) {
        int copy=x;
        int res=0,rem=0;
        while(copy!=0){
            rem = copy%10;
            if(res<INT_MIN/10 || (res==INT_MIN/10 && rem<-8))
                return 0;
            if(res>INT_MAX/10 || (res==INT_MIN/10 && rem>7))
                return 0;
            res=res*10+rem;
            copy=copy/10;
        }
        return res;
    }
};