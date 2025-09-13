class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> freq;
        int maxVowel=0, maxCon=0;
        for(char ch:s)
            freq[ch]++;
        for(auto itr:freq){
            if(itr.first=='a' || itr.first=='e' || itr.first=='i' || itr.first=='o' || 
                itr.first=='u')
                maxVowel=max(maxVowel, itr.second);
            else
                maxCon=max(maxCon, itr.second);
        }
        return maxVowel+maxCon;
    }
};