//
// Created by Justin Chiu on 9/10/17.
//

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;
    int numQueries;
    cin >> numQueries;

    for (int i = 0 ; i < numQueries ; i++){
        int query, val;
        cin >> query >> val;
        switch(query){
            case 1 :
                s.insert(val);
                break;
            case 2 :
                s.erase(val);
                break;
            case 3 :
                cout << (s.find(val) != s.end() ? "Yes" : "No") << endl;
                break;
            default:
                break;
        }
    }

    return 0;
}