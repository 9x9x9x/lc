// don't include the comment in lc
// search insert position 35
// fsociety, 0ms, 100+%

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0); 
    }
    
    int searchInsert(vector<int>& nums, int t) {
        int l = 0, r = nums.size() - 1, m;
        if(r + 1 == 0 || t < nums[0])
            return l;
        if(t > nums[r])
            return r+1;
        while(l <= r) {
            m = l + (r - l) / 2;
            if(nums[m] == t)
                return m;
            else if(t < nums[m])
                r = m - 1;
            else
                l = m + 1;
        }
        return l;
    }
};
