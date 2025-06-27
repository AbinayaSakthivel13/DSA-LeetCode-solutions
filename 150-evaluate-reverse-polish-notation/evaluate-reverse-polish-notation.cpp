class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(string str: tokens){
            if(str=="+"){
                int second=stk.top(); stk.pop();
                int first=stk.top(); stk.pop();
                stk.push(second+first);
            }
            else if(str=="-"){
                int second=stk.top(); stk.pop();
                int first=stk.top(); stk.pop();
                stk.push(first-second);
            }
            else if(str=="*"){
                int second=stk.top(); stk.pop();
                int first=stk.top(); stk.pop();
                stk.push(first*second);
            }
            else if(str=="/"){
                int second=stk.top(); stk.pop();
                int first=stk.top(); stk.pop();
                stk.push(first/second);
            }
            else
                stk.push(stoi(str));
        }
        return stk.top();
    }
};