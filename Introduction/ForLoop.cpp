//
// Created by Justin Chiu on 9/8/17.
//

#include <iostream>
#include <map>

using namespace std;

void printNum(int numIn) {
    map <int, string> nums{
            {1, "one"}, {2, "two"}, {3,"three"},
            {4, "four"}, {5, "five"}, {6,"six"},
            {7,"seven"}, {8,"eight"}, {9,"nine"}
    };
    cout << nums.at(numIn) << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a ; i <= b ; i++){
        if (i > 9){
            cout << ((i % 2 == 0) ? "even" : "odd") << endl;
        } else {
            printNum(i);
        }
    }
    return 0;
}

