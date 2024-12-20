class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int copy=x;
        int res=0;
        while(copy){
            if(res>INT_MAX/10 || (res==INT_MAX/10 && copy%10>7))
                return false;
            res = res*10 + copy%10;
            copy=copy/10;
        }
        return x==res;
    }
};