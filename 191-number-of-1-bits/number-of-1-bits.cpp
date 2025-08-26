class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        string binary=bitset<32>(n).to_string();
        for(char ch:binary){
            if(ch=='1')
                count++;
        }
        return count;
    }
};