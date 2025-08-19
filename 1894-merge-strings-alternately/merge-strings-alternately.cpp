class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1=word1.length(), l2=word2.length();
        string res="";
        for(int i=0;i<l1||i<l2;i++){
            if(i<l1)
                res+=word1[i];
            if(i<l2)
                res+=word2[i];
        }
        return res;
    }
};