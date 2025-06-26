class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)
            return 0;
        vector<bool> is_prime(n,true);
        is_prime[0]=is_prime[1]=false;
        for(int i=2;i*i<n;i++){
            if(is_prime[i]){
                for(int mult=i*i;mult<n;mult+=i)
                    is_prime[mult]=false;
            }
        }
        return count(is_prime.begin(),is_prime.end(),true);
    }
};