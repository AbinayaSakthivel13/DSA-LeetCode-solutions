class Solution {
public:
string licenseKeyFormatting(string s, int k) {
    int count = 0;
    string result = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        if (!isalnum(s[i])) continue; 
        result.push_back(toupper(s[i]));
        count++;
        if (count == k) {
            result += '-';
            count = 0;
        }
    } if (!result.empty() && result.back() == '-') result.pop_back();
    reverse(result.begin(), result.end()); 
    return result;
}
};