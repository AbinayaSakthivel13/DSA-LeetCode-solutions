class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int copy=x;
        vector<int> arr;
        while(copy>0){
            arr.push_back(copy%10);
            copy=copy/10;
        }
        int left=0,right=arr.size()-1;
        while(left<right){
            if(arr[left]!=arr[right])
                return false;
            left++; right--;
        }
        return true;
    }
};