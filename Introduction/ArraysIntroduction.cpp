//
// Created by Justin Chiu on 9/9/17.
//

// You'll be given an array of N integers and you
// have to print the integers in the reverse order.
// Input Format
// The first line of the input contains N,
// where N is the number of integers.
// The next line contains N integers separated by a space.
//

#include <cstdio>
#include <iostream>

int main()
{
    int numIntegers;
    std::cin >> numIntegers;
    int array[numIntegers];

    for (int i = 0 ; i < numIntegers ; i++){
        std::cin >> array[i];
    }

    for (int i = 0 ; i < numIntegers ; i++){
        std::cout << array[numIntegers - 1- i] << " ";
    }
    return 0;

}