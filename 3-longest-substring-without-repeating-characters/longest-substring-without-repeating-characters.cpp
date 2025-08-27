class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        unordered_set<char> charSet;
        for(int l=0,r=0;r<s.length();r++){
            while(charSet.find(s[r])!=charSet.end()){
                charSet.erase(s[l]);
                l++;
            }
            charSet.insert(s[r]);
            maxlen=max(maxlen, r-l+1);
        }
        return maxlen;
    }
};