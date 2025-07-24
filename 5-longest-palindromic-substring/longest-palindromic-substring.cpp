/*class Solution {
public:
    string ans = "";
    void expand(string &s , int left ,int right)
    {
        while(left >= 0 &&  right < s.size())
        {
            if(s[left] != s[right])
                break;
            left--,right++;
        }
        if(ans.size() < right - left )
            ans = s.substr(left + 1 , right - left - 1);
    }
    string longestPalindrome(string s) {
        for(int i = 0 ; i < s.size() ; i++)
        {
            expand(s , i , i);
            expand(s , i , i+1);
        }
        return ans;
    }
};*/
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n <= 1) return s;

        string result = s.substr(0, 1); // Default to first character

        for (int i = 1; i < n; i++) {
            // --- Odd-Length Palindrome ---
            int l = i, r = i;
            while (l >= 0 && r < n && s[l] == s[r]) {
                string palindrome = s.substr(l, r - l + 1);
                if (palindrome.length() > result.length()) result = palindrome;
                l--; r++;
            }

            // --- Even-Length Palindrome ---
            l = i - 1; r = i;
            while (l >= 0 && r < n && s[l] == s[r]) {
                string palindrome = s.substr(l, r - l + 1);
                if (palindrome.length() > result.length()) result = palindrome;
                l--; r++;
            }
        }

        return result;
    }
};