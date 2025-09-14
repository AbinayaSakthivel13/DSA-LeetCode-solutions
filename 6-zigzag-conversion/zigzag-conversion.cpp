class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;

        string ans;
        int cycleLen = 2 * numRows - 2;

        for(int row = 0; row < numRows; row++)
        {
            for(int j = row; j<s.length(); j += cycleLen)
            {
                ans+=s[j];

                int secondJump = j + cycleLen - 2*row;
                if(row != 0 && row != numRows - 1 && secondJump < s.size())
                {
                    ans += s[secondJump];
                }
            }
        }
        return ans;
    }
};