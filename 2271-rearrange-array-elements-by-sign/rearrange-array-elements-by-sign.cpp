class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> neg; vector<int> pos; vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
                pos.push_back(nums[i]);
            else
                neg.push_back(nums[i]);
        }
        int pos_ind=0,neg_ind=0;
        while(neg_ind<nums.size()/2){
            ans.push_back(pos[pos_ind++]);
            ans.push_back(neg[neg_ind++]);
        }
        return ans;
    }
};