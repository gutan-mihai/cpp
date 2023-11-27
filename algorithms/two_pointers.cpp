#include <vector>

// Two Pointers Technique: https://www.geeksforgeeks.org/two-pointers-technique/

int two_pointers(std::vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    sort(nums.begin(), nums.end());

    while (left < right) {
        int result = nums[left] + nums[right];
        if (result == target) {
            return 1;
        }

        if (result < target) {
            ++left;
        } else {
            --right;
        }
    }

    return 0;
}