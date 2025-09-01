#include <iostream>
#include <vector>
using namespace std;

// Time Complexity:O(n), where n is the size of the input vector nums, due to two linear scans.
// gitSpace Complexity:O(1), as the algorithm uses a constant amount of extra space
class Solution {
   public:
    void moveZeroes(vector<int>& nums) {
        // Two-Pass Approach for Moving Zeroes
        int nonZeroIndex = 0;

        // First pass: Move all non-zero elements to the front
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                nums[nonZeroIndex] = nums[i];
                nonZeroIndex++;
            }
        }

        // Second pass: Fill the rest with zeros
        for (int i = nonZeroIndex; i < nums.size(); ++i) {
            nums[i] = 0;
        }
    }
};