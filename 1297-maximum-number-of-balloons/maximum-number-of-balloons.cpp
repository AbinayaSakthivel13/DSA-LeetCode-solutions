class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> freq;
        int count=INT_MAX;
        for(char ch: text)
            freq[ch]++;
        unordered_map<char, int> existed={
            {'b',1},
            {'a',1},
            {'l',2},
            {'o',2},
            {'n',1}
        };
        for(auto itr: existed){
            if(freq.find(itr.first)==freq.end())
                return 0;
            count=min(count,freq[itr.first]/itr.second);
        }
        return count;
    }
};