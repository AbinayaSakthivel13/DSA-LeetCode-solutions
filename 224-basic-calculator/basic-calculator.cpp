class Solution {
public:
    int calculate(string s) {
        stack<pair<int,int>> stk;
        int sign=1, sum=0;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                long long num=0;
                while(i<s.length() && isdigit(s[i])){
                    num=num*10+s[i]-'0';
                    i++;
                }
                i--;
                sum=sum+num*sign;
                sign=1;
            }
            else if(s[i]=='('){
                stk.push({sum,sign});
                sum=0; sign=1;
            }
            else if(s[i]==')'){
                sum=stk.top().first+sum*stk.top().second;
                stk.pop();
            }
            else if(s[i]=='+')
                sign=1;
            else if(s[i]=='-')
                sign=-1;
        }
        return sum;
    }
};