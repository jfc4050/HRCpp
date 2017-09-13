//
// Created by Justin Chiu on 9/10/17.
//

#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

vector<int> generateRows() {
    int val, lenArray;
    cin >> lenArray;
    vector<int> temp;
    while (lenArray--) {
        cin >> val;
        temp.push_back(val);
    }
    return temp;
}

int main() {

    int arrays, queries;
    cin >> arrays
        >> queries;

    vector<vector<int>> matrix;

    while (arrays--) {
        matrix.push_back(generateRows());
        }

    int arrayNumber, arrayIndex;
    while (queries--) {
        cin >> arrayNumber
            >> arrayIndex;
        cout << matrix[arrayNumber][arrayIndex] << endl;
    }

    return 0;
}

