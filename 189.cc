// don't include the comment in lc
// 189. Rotate Array
// fsociety, 39ms, 66+%

// Tip: k %= n
// Approach 1: reverse all, reverse  first k elements, reverse last n-k elements
// Approach 2: swap last k elements with first k elements. Repeat same with the first (n-k) elements.

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0); 
    }
    
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
