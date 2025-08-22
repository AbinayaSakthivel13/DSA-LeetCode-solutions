class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        /*int freq1[26]={0};
        int freq2[26]={0};
        for(int i=0;i<s.length();i++){
            freq1[s[i]-'a']++;
            freq2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i])
                return false;
        }
        return true;*/
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        return mp1==mp2;
    }
};