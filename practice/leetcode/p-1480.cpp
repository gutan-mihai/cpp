#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include "helpers.h"

using namespace std;

// Given an array nums. We define a running sum of an array as runningSum[i] =
// sum(nums[0]…nums[i]). Return the running sum of nums.

class RunningSumOf1DArray {
public:
    void run() {
        cout << "Enter the elements for the list (separated by space): ";
        auto nums = helpers::fill_list<vector<int>, int>();
        vector<int> running_sum;
        for (auto nums_it = nums.begin(); nums_it != nums.end(); ++nums_it) {
            int sum = *nums_it;
            for (auto run_it = nums.begin(); run_it != nums_it; ++run_it) {
                sum += *run_it;
            }

            running_sum.push_back(sum);
        }

        cout << "Output: \n";
        for_each(running_sum.begin(), running_sum.end(), [](const int &num) {
            cout << num << " ";
        });

        cout << "\n";
    }
};