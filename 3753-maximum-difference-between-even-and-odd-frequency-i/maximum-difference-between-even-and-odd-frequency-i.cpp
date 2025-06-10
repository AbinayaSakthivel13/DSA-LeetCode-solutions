class Solution {
public:
    int maxDifference(string s) {
        int max_count=0, min_count=s.length();
        vector<int> freq(26);
        for(char ch: s)
            freq[ch-'a']++;
        for(int count:freq){
            if(count%2 != 0)
                max_count=max(max_count,count);
            if(count%2 == 0 && count>0)
                min_count=min(min_count,count);
        }
        return max_count-min_count;
    }
};