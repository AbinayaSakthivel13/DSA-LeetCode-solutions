class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> PrevR;
        for(int i=0;i<numRows;i++){
            vector<int> CurR(i+1,1);
            for(int j=1;j<i;j++){
                CurR[j]=PrevR[j-1]+PrevR[j];
            }
            res.push_back(CurR);
            PrevR=CurR;
        }
        return res;
    }
};