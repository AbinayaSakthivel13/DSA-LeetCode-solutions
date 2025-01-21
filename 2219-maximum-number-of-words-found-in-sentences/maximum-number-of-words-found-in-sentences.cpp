class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_word=0;
        for(auto str:sentences){
            int space=count(str.begin(),str.end(),' ');
            max_word=max(max_word,space+1);
        }
        return max_word;
    }
};