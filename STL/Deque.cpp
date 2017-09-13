//
// Created by Justin Chiu on 9/10/17.
//

#include <iostream>
#include <deque>
using namespace std;

int findMax(const deque<int> (&deq)){
    int max = INT_MIN;
    for (int x : deq) {
        if (arr[x] > max)
            max = x;
    }
    return max;
}


void printKMax(int arr[], const int & arraySize, const int & subarraySize){
    deque<int> deq;

    int i = 0;
    while (deq.size() != subarraySize){
        deq.push_back(i);
        i++;
    }
    while (i <= arraySize){
        cout << findMax(deq) << " ";
        deq.push_back(i);
        deq.pop_front();
        i++;
    }
    cout << "\n";
}

int main(){
    int testCases; cin >> testCases;

    while (testCases) {
        int arraySize, subarraySize;
        cin >> arraySize
            >> subarraySize;

        int arr[arraySize]; // declare and populate array
        for(int i = 0 ; i < arraySize ; i++)
            cin >> arr[i];

        printKMax(arr, arraySize, subarraySize);

        testCases--;
    }
    return 0;
}

