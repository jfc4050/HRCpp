//
// Created by Justin Chiu on 9/8/17.
//

#include <cstdio>
#include <iostream>
#include <array>

using namespace std;

int maxOfFour(int a, int b, int c, int d){
    array<int,4> listNums = {a, b, c, d};
    int max = INT_MIN;
    for (int listNum : listNums) {
        if (listNum > max) {
            max = listNum;
        }
    }
    return max;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = maxOfFour(a, b, c, d);
    cout << ans;
}