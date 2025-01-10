class Solution {
public:
    int minTimeToType(string word) {
        int sec=0;
        int curChar='a';
        for(int i=0;i<word.length();i++){
            int clockWise=abs(word[i]-curChar);
            int antiClockWise=26-clockWise;
            sec+=min(clockWise,antiClockWise)+1;
            curChar=word[i];
        }
        return sec;
    }
};