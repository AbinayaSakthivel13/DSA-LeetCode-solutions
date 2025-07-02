class Solution {
public:
    bool detectCapitalUse(string word) {
        if(isStringUpper(word))
            return true;
        else if(isStringLower(word))
            return true;
        else if(word[0] && isStringLower(word.substr(1)))
            return true;
        return false;
    }
    bool isStringUpper(string str){
        int count=0;
        for( char ch:str){
            if(isupper(ch))
                count++;
        }
        return str.length()==count;
    }
    bool isStringLower(string str){
        int count=0;
        for( char ch:str){
            if(islower(ch))
                count++;
        }
        return str.length()==count;
    }
};