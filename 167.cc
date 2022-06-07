// don't include the comment in lc
// 167. Two Sum II - Input Array Is Sorted
// fsociety 14ms, 80%

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++) {
            int f = nums[i];
            int l = 0, r = nums.size() - 1;
            while(l <= r) {
                int m = l + (r - l) / 2;
                if(m == i)
                    break;
                int sum = nums[m] + f;
                if(sum == target) {
                    vector <int> t = {i+1, m+1};
                    sort(t.begin(), t.end());
                    return t;                
                }
                else if(target < sum)
                    r = m - 1;
                else
                    l = m + 1;
            }
        }
        return {};
    }
};
