//
// Created by Justin Chiu on 9/9/17.
//

#include <string>
#include <iostream>
using namespace std;

void printLengths(string *ptrA, string *ptrB){
    cout << (*ptrA).size() << " "
         << (*ptrB).size()
         << endl;
}
void stringConcatenation(string *ptrA, string *ptrB){
    cout << *ptrA + *ptrB
         << endl;
}
void stringRearrange(string *ptrA, string *ptrB){
    swap( (*ptrA)[0], (*ptrB)[0] );
    cout << *ptrA << " "
         << *ptrB
         << endl;
}
int main(){
    string a,b;
    cin >> a >> b;

    string *ptrA = &a;
    string *ptrB = &b;

    printLengths(ptrA,ptrB);
    stringConcatenation(ptrA,ptrB);
    stringRearrange(ptrA,ptrB);

    return 0;
}
