class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, r=height.size()-1, maxArea=0;
        int b=height.size(), h=height[0];
        while(l<=r){
            b=r-l;
            h=min(height[l], height[r]);
            maxArea=max(maxArea,b*h);
            if(height[l]<height[r])
                l++;
            else
                r--;
        }
        return maxArea;
    }
};