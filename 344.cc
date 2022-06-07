// don't include the comment in lc
// 344. Reverse String
// fsociety, 24ms 74%

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int l = 0, r = n - 1;
        while(l < r) {
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }        
};
