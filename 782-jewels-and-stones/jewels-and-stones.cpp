class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0, i=0, j=0;
        /*while(i<jewels.length()){
            while(jewels[i]==stones[j] && j<stones.length())
                count++;
            j++;
            i++;
        }*/
        for(int i=0;i<jewels.length();i++){
            for(int j=0;j<stones.length();j++){
                if(jewels[i]==stones[j])
                    count++;
            }
        }
        return count;
    }
};