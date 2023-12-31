#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include "utils.h"

// Given an array nums. We define a running sum of an array as runningSum[i] =
// sum(nums[0]…nums[i]). Return the running sum of nums.

class Solution1480 {
public:
    void run() {
        cout << "Enter the elements for the list (separated by space): ";
        auto nums = utils::fill_list<std::vector<int>, int>();
        std::vector<int> running_sum;
        for (auto nums_it = nums.begin(); nums_it != nums.end(); ++nums_it) {
            int sum = *nums_it;
            for (auto run_it = nums.begin(); run_it != nums_it; ++run_it) {
                sum += *run_it;
            }

            running_sum.push_back(sum);
        }

        std::cout << "Output: \n";
        for_each(running_sum.begin(), running_sum.end(), [](const int &num) {
            std::cout << num << " ";
        });

        std::cout << "\n";
    }
};