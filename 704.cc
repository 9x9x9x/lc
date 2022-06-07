// don't include the comment in lc
// binary search 704
// fsociety, 27ms, 99+%

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0); 
    }
    
    int search(vector<int>& nums, int target) {
        int size_t = nums.size();
        if(size_t == 0 || target < nums[0] || target > nums[size_t - 1])
            return -1;
        int l = 0, r = size_t - 1;
        while(l <= r) {
            int m = (l + r) / 2;
            if(target == nums[m])
                return m;
            else if(target < nums[m])
                r = m - 1;
            else
                l = m + 1;
        }
        return -1;
    }
};
