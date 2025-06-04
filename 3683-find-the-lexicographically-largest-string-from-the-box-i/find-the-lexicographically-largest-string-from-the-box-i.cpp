class Solution {
public:
    string answerString(string word, int numFriends) {
        string res="";
        if(numFriends==1)
            return word;
        for(int i=0;i<word.length();i++){
            res=max(res,word.substr(i,word.length()-numFriends+1));
        }
        return res;
    }
};