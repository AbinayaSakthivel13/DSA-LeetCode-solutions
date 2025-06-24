class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.empty())
            return res;
        unordered_map<char, string> digitLetter={
            {'2',"abc"},
            {'3',"def"},
            {'4',"ghi"},
            {'5',"jkl"},
            {'6',"mno"},
            {'7',"pqrs"},
            {'8',"tuv"},
            {'9',"wxyz"}
        };
        backtrack(digits,0,"",res,digitLetter);
        return res;
    }
    void backtrack(string digits, int ind, string comb, vector<string>& res, const                  unordered_map<char, string>&digitLetters){
        if(ind==digits.length()){
            res.push_back(comb);
            return;
        }
        string letters=digitLetters.at(digits[ind]);
        for(char let: letters)
            backtrack(digits, ind+1, comb+let, res, digitLetters);
    }
};