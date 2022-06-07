// do not add comment to lc
// 278, first bad version
// fsociety, 0ms, 100%
// approach: binary search

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, r = n, m;
        while(l < r) {
            m = l + (r - l) / 2;
            if(!isBadVersion(m)) l = m + 1;
            else r = m;
        }
        return l;
    }
};
