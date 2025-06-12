class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)
            return x;
        int start=0, end=x;
        while(start<=end){
            int mid=start+(end-start)/2;
            long long sq = static_cast<long long>(mid) * mid;
            if(sq>x)
                end=mid-1;
            else if(sq<x)
                start=mid+1;
            else
                return mid;
        }
        return static_cast<int>(round(end));
    }
};