//
// Created by Justin Chiu on 9/10/17.
//

#include <iostream>
#include <map>
using namespace std;

int main() {
    unsigned int queries;
    map<string,int> m;
    cin >> queries;

    while (queries) {
        unsigned short type;
        int mark;
        string name;
        cin >> type >> name;
        switch(type) {
            case 1:
                cin >> mark;
                if (m.find(name) == m.end())
                    m.insert(make_pair(name, mark));
                else
                    m[name] += mark;
                break;
            case 2:
                m[name] = 0;
                break;
            case 3:
                cout << m[name] << endl;
                break;
            default:
                break;
        }
        queries--;
    }
    return 0;
}