//
// Created by Justin Chiu on 9/10/17.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix {
public:
    Matrix operator + (Matrix y) {

    }
};

int main () {
    int cases,k;

    cin >> cases;
    for (k = 0 ; k < cases ; k++) {

        Matrix x;
        Matrix y;
        Matrix result;
        int n, m, // number of rows, columns in each matrix
            i, j; // ith row, jth column

        cin >> n
            >> m;

        for (i = 0 ; i < n ; i++) {

            vector<int> b;
            int num;

            for(j = 0 ; j < m ; j++) {
                cin >> num;
                b.push_back(num);
            }
            x.a.push_back(b);
        }

        for ( i = 0 ; i < n ; i++) {
            vector<int> b;
            int num;

            for (j = 0 ; j < m ; j++) {
                cin >> num;
                b.push_back(num);
            }
            y.a.push_back(b);
        }
        result = x+y;
        for(i=0;i<n;i++) {
            for(j=0;j<m;j++) {
                cout << result.a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

