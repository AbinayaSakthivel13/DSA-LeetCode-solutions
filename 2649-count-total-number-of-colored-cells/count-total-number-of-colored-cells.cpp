class Solution {
public:
    long long coloredCells(int n) {
        long long res = 1;  // Start with 1 cell in the center
        int i = 4;          // The number of cells added at each step

        while (n > 1) { 
            res += i;  // Add new cells forming a cross
            i += 4;    // Increase the count of added cells by 4 each step
            n--;
        }

        return res;  // Return total number of colored cells
    }
};