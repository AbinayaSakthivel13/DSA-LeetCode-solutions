class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int n=s.length();
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='[' || ch=='(' || ch=='{')
                stk.push(ch);
            else{
                if(stk.empty())
                    return false;
                else if(stk.top()=='[' && ch==']' || stk.top()=='{' && ch=='}' 
                        || stk.top()=='(' && ch==')')
                    stk.pop();
                else
                    return false;
            }
        }
        return stk.empty();
    }
};