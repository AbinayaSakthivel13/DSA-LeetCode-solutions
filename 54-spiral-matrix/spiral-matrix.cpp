class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size(), col=matrix[0].size();
        int l=0, r=col-1, top=0, bot=row-1;
        vector<int> res;
        while(l<=r && top<=bot){
            for(int i=l;i<=r;i++)
                res.push_back(matrix[top][i]);
            top++;
            for(int i=top;i<=bot;i++)
                res.push_back(matrix[i][r]);
            r--;
            if(top<=bot){
                for(int i=r;i>=l;i--)
                    res.push_back(matrix[bot][i]);
                bot--;
            }
            if(l<=r){
                for(int i=bot;i>=top;i--)
                    res.push_back(matrix[i][l]);
                l++;
            }
        }
        return res;
    }
};