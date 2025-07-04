class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string temp;
        int words=0;
        while(ss>>temp)
            words++;
        return words;
    }
};