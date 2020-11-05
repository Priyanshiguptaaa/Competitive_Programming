class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int R, int C, int r0, int c0) 
    {
        int dirr[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        vector < vector <int> > ret;
        int len = 0;
        int dir = 0;
        ret.push_back({r0, c0});
        while(ret.size() < R * C)
        {
             if(dir == 0 || dir == 2) len++;
             for(int i = 0; i < len; i++)
             {
                r0 = r0 + dirr[dir][0];
                c0 = c0 + dirr[dir][1];
                if(r0 < 0 || c0 < 0 || c0 >= C || r0 >= R) continue;
                ret.push_back({r0, c0});
             }
             dir = (dir + 1) % 4;
        }
        return ret;
    }
};
