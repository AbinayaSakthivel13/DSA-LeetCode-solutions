/*class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int j=0,i=m;j<n;j++){
            nums1[i]=nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        for(int j=m;j<n+m;j++){
            nums1[j]=nums2[i++];
        }
        sort(nums1.begin(),nums1.end());
    }
};