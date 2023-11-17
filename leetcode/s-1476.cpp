#pragma once

#include <vector>

using namespace std;

// Implement the class SubrectangleQueries which receives a rows x cols rectangle as a matrix of integers in the
// constructor and supports two methods:

// 1. updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
// - Updates all values with newValue in the subrectangle whose upper left coordinate is (row1,col1) and bottom right
// coordinate is (row2,col2).

// 2. getValue(int row, int col)
// - Returns the current value of the coordinate (row,col) from the rectangle.

class SubrectangleQueries1476 {
public:
    SubrectangleQueries1476(vector<vector<int>>& rectangle) : matrix(rectangle) {}

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for (int i = row1; i <= row2; ++i) {
            for (int j = col1; j <= col2; ++j) {
                matrix[i][j] = newValue;
            }
        }
    }
    
    int getValue(int row, int col) {
        return matrix[row][col];
    }

private:
    vector<vector<int>>& matrix;
};