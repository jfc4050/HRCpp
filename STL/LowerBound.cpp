//
// Created by Justin Chiu on 9/10/17.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size, val;
    cin >> size; // size of vector
    vector<int> v;
    for (int i = 0 ; i < size ; i++) { // populate vector
        cin >> val;
        v.push_back(val);
    }
    int numQueries, queryVal;
    int* ptrQ = &queryVal;
    cin >> numQueries;
    for (int j = 0 ; j < numQueries ; j++) {
        cin >> queryVal;
        auto it = lower_bound(v.begin(), v.end(), *ptrQ);
        cout << (*it == *ptrQ ? "Yes" : "No") << " "  // check if lower bound is equal to query value
             << it - v.begin() + 1
             << endl;
    }
    return 0;
}