// don't include the comment in lc
// 283. Move Zeroes
// fsociety, 22 30 ms, 85+%

// Hint: First write sub-optimal solution, it will provide way to your space optimal solution!

class Solution {
public:
    /*
    void moveZeroes(vector<int>& nums) {
        vector <int> temp;
        int count = 0;
        for(auto i: nums) {
            //std::cout << i << endl;
            if(i == 0)
                count++;
            else {
                temp.push_back(i);
            }
        }
        while(count--)
            temp.push_back(0);
        for(int i=0; i<nums.size(); i++)
            nums[i] = temp[i];
    }
    */
  void moveZeroes(vector<int>& nums) {
        int l = 0, count = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] != 0)
                nums[l++] = nums[i];
            else
                count++;
        }
        while(l < nums.size() && count--)
            nums[l++] = 0;
    }
};
