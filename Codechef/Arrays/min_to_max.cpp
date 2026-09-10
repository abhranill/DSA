#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int countNonMinimum(vector<int>& nums) {
        if (nums.empty()) return 0;
        int minimum = nums[0];
        for (int num : nums) {
            minimum = min(minimum, num);
        }
        int countMin = 0;
        for (int num : nums) {
            if (num == minimum) {
                countMin++;
            }
        }

        
        return nums.size() - countMin;
    }
};