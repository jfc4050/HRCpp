//
// Created by Justin Chiu on 9/9/17.
//

#include <cmath>
#include <vector>
#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0 ; i < n ; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int a, b, c;
    cin >> a
        >> b
        >> c;
    v.erase(v.begin() + a - 1);
    v.erase(v.begin() + b - 1, v.begin() + c - 1);

    cout << v.size() << endl;
    for (auto const i : v) {
        cout << i << " ";
    }

    return 0;
}

