//
// Created by Justin Chiu on 9/9/17.
//

#include <iostream>
#include <vector>

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

    sort(v.begin(),v.end());

    for (auto const i : v) {
        cout << i << " ";
    }
    return 0;
}