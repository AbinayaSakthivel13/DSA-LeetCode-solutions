class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(), col=matrix[0].size();
        int l=0, h=row*col-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            int midEle=matrix[mid/col][mid%col];
            if(midEle==target)
                return true;
            else if(midEle<target)
                l++;
            else
                h--;
        }
        return false;
    }
};