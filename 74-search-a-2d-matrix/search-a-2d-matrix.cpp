class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int low=0,high=r*c-1;
        while(low<=high){
            int mid=(low+high)/2;
            int midElement=matrix[mid/c][mid%c];
            if(midElement==target)
                return true;
            else if(midElement<target)
                low++;
            else
                high--;
        }
        return false;
    }
};