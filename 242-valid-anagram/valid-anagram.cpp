class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq1(26,0), freq2(26,0);
        int m=s.length(), n=t.length();
        if(m!=n)
            return false;
        for(int i=0;i<m;i++){
            freq1[s[i]-'a']++;
            freq2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(freq1[i] != freq2[i])
                return false;
        }
        return true;
    }
};