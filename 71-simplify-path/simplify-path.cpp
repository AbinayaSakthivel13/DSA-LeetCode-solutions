class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stk;
        stringstream ss(path);
        string token;
        while(getline(ss,token, '/')){
            if(token=="" || token==".")
                continue;
            else if(token==".."){
                if(!stk.empty())
                    stk.pop_back();
            }
            else
                stk.push_back(token);
        }
        string res;
        for(const auto& dir: stk)
            res+="/"+dir;
        return res.empty()?"/":res;
    }
};