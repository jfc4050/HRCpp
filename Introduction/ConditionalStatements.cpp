//
// Created by Justin Chiu on 9/7/17.
//

#include <iostream>
#include <map>

using namespace std;
int main() {
    int numIn;
    cin >> numIn;
    map <int, string> nums{
            {0, "zero"},
            {1, "one"}, {2, "two"}, {3,"three"},
            {4, "four"}, {5, "five"}, {6,"six"},
            {7,"seven"}, {8,"eight"}, {9,"nine"}
    };
    if (numIn <= 9){
        cout << nums.at(numIn);
    } else {
        printf("Greater than 9");
    }

    return 0;
}