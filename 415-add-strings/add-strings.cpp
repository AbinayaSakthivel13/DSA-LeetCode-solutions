class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1, j=num2.size()-1;
        string res="";
        int carry=0;
        while(i>=0 || j>=0 || carry){
            int dig1 = (i>=0) ? num1[i--]-'0':0;
            int dig2 = (j>=0) ? num2[j--]-'0':0;
            int sum=dig1+dig2+carry;
            res+=(sum%10) + '0';
            carry=sum/10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};