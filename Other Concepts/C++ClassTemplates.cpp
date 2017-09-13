//
// Created by Justin Chiu on 9/10/17.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

template<typename type> class AddElements {
private:
    type element1;
public:
    explicit AddElements(type elementIn){
        element1 = elementIn;
    }
    type add(type elementIn) {
        return element1 + elementIn;
    }
    string concatenate(string elementIn) {
        return element1 + elementIn;
    }
};

int main () {
    int n,i;
    cin >> n;
    for(i=0;i<n;i++) {
        string type;
        cin >> type;
        if(type=="float") {
            double element1,element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat (element1);
            cout << myfloat.add(element2) << endl;
        }
        else if(type == "int") {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint (element1);
            cout << myint.add(element2) << endl;
        }
        else if(type == "string") {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring (element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}