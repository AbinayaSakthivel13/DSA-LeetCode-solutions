class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n=citations.size(),res=0;
        for(int i=n-1;i>=0;i--){
            int more=n-i;
            if(citations[i]>=more)
                res=max(res,more);
        }
        return res;
    }
};