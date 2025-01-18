typedef unsigned char utype;
typedef pair<utype, utype> pcc;
#define ff first
#define ss second

class Solution {
public:
    const utype di[4] = { 0, 0, 1, static_cast<utype>(-1) };
    const utype dj[4] = { 1, static_cast<utype>(-1), 0, 0 };
    utype vis[100][100];
    int minCost(vector<vector<int>>& grid) {
        utype m = grid.size();
        utype n = grid[0].size();
        memset(vis, -1, sizeof(vis));

        std::vector<pcc> q, nq;
        q.reserve(1024);
        nq.reserve(1024);
        int c = 0;

        q.emplace_back(0, 0);
        vis[0][0] = 0;

        while (!q.empty()) {
            while (!q.empty()) {
                pcc x = q.back(); q.pop_back();
                if (vis[x.ff][x.ss] != c) continue;
                if (x.ff == m - 1 && x.ss == n - 1) return c;
                for (utype k = 0, ni, nj; k < 4; ++k) {
                    ni = x.ff + di[k];
                    nj = x.ss + dj[k];
                    if (m <= ni || n <= nj) continue;

                    if (grid[x.ff][x.ss] - 1 == k) {
                        if (vis[ni][nj] > c) {
                            vis[ni][nj] = c;
                            q.emplace_back(ni, nj);
                        }
                    }
                    else {
                        if (vis[ni][nj] > c + 1) {
                            vis[ni][nj] = c + 1;
                            nq.emplace_back(ni, nj);
                        }
                    }
                }
            }
            q.swap(nq);
            c += 1;
        }
        return -1;
    }
};