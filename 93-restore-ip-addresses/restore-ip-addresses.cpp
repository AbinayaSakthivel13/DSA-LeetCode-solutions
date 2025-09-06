class Solution {
private:
    vector<string> res;
    int n;
    void backtrack(string& s, int idx, int dots, string& path) {
        if (dots == 4){
            if(idx == n){
                path.pop_back();
                res.push_back(path);
            }
            return;
        }
        int num = 0, len = path.size();
        for (int i = idx; i < n; ++i) {
            num = num * 10 + (s[i] - '0');
            if (num > 255) break;
            path.append(to_string(num)).push_back('.');
            backtrack(s, i + 1, dots + 1, path);
            path.resize(len);
            if (s[idx] == '0') break;
        }
    }
public:
    vector<string> restoreIpAddresses(string s) {
        n = s.length();
        if (n < 4 || n > 12) return {};
        string path;
        path.reserve(n + 4);
        backtrack(s, 0, 0, path);
        return res;
    }
};