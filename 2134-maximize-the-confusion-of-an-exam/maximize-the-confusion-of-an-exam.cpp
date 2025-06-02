class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int left=0;
        int t=0,f=0, res=0;
        for(int right=0;right<answerKey.size();right++){
            if(answerKey[right]=='T')
                t++;
            else
                f++;
            if((right-left+1)-max(t,f) <=k){
                res=max(res,right-left+1);
            }
            else{
                while((right-left+1)-max(t,f)>k){
                    if(answerKey[left]=='T')
                        t--;
                    else
                        f--;
                    left++;
                }
            }
        }
        return res;
    }
};