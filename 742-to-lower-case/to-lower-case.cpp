class Solution {
public:
    string toLowerCase(string s) {
        string res;
        for(char ch: s){
            if(tolower(ch))
                res+=tolower(ch);
            else
                res+=ch;
        }
        return res;
    }
};