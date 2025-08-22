class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        /*for(int i=0;i<jewels.length();i++){
            for(int j=0;j<stones.length();j++){
                if(jewels[i]==stones[j])
                    count++;
            }
        }*/
        unordered_set<char> jewel(jewels.begin(), jewels.end());
        for(char stone:stones){
            if(jewel.count(stone))
                count++;
        }
        return count;
    }
};