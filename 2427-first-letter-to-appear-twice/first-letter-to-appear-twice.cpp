class Solution {
public:
    char repeatedCharacter(string s) {
        char ans;
        unordered_map<char,int> count;
        for(int i=0;i<s.size();i++){
            count[s[i]]++;
            if(count[s[i]]==2)
                return s[i];
        }
        return ans;
    }
};