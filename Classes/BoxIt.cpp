//
// Created by Justin Chiu on 9/9/17.
//

#include <cstdio>
#include <iostream>
using namespace std;

class Box {
private:
    long l, b, h;
public:
    //Constructors
    Box() {
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int length, int breadth, int height) {
        l = length;
        b = breadth;
        h = height;
    }
    Box(const Box& B){
        l = B.l;
        b = B.b;
        h = B.h;
    }

    //Methods
    int getLength() {
        return l;
    }
    int getBreadth() {
        return b;
    }
    int getHeight() {
        return h;
    }
    long long CalculateVolume() {
        return l * b * h;
    }

    //Overload < operator
    bool operator<(const Box& B){
        if (this->l < B.l)
            return true;
        if ((this->b < B.b) && (this->l == B.l))
            return true;
        if ((this->h < B.h) && (this->b == B.b) && (this->l == B.l))
            return true;
        return false;
    }

    //Overload << operator
    friend ostream& operator<< (ostream& output, const Box& B) {
        output << B.l << " "
               << B.b << " "
               << B.h;
        return output;
    }

};

void check2() {
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++) {
        int type;
        cin>>type;
        if(type ==1) {
            cout<<temp<<endl;
        }
        if(type == 2) {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3) {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp) {
                cout<<"Lesser\n";
            } else {
                cout<<"Greater\n";
            }
        }
        if(type==4) {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5) {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }
    }
}

int main() {
    check2();
}