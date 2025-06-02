class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> stk;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                stk.push('(');
            else{
                if(!stk.empty())
                    stk.pop();
                else
                    ans++;
            }
        }
        return ans+=stk.size();
    }
};