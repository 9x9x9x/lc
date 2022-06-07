// don't include the comment in lc
// 977. Squares of a Sorted Array
// fsociety, 34ms, 70+%

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0, r = nums.size() - 1, temp = r + 1;
        vector <int> s;
        while(temp--) {
            if(abs(nums[l]) > abs(nums[r]))
                s.push_back(nums[l] * nums[l++]);
            else
                s.push_back(nums[r] * nums[r--]);
        }
        reverse(s.begin(), s.end()); // we actually don't need reverse(), but its fine
        return s;
    }
};
