/* 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

#include <unordered_map>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Map to store value and index
        std::unordered_map<int, int> seen_numbers;

        for (int i = 0; i < nums.size(); i++) {
            int current = nums[i];
            int complement = target - current;

            // Check if the complement is in the map already.
            if (seen_numbers.find(complement) != seen_numbers.end()) {
                // If found return index
                return {seen_numbers[complement], i};
            }

            // add current number to map
            seen_numbers[current] = i;
        }

        // Return empty vector
        return {};
    }
};
