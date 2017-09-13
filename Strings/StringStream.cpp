//
// Created by Justin Chiu on 9/10/17.
//

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> parsed;
    char ch = ',';
    int temp;
    while (ss >> temp) {
        parsed.push_back(temp);
        ss >> ch;
    }
    return parsed;
}

int main() {
    string str;
    cin >> str;

    vector<int> integers = parseInts(str);

    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}

