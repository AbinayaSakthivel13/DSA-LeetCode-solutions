class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.length(),res=0,curr=1,prev=0;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1])
                curr++;
            else{
                res+=min(prev,curr);
                prev=curr;
                curr=1;
            }
        }
        res+=min(prev,curr);
        return res;
    }
};