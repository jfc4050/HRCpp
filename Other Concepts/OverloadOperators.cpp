//
// Created by Justin Chiu on 9/10/17.
//

#include<iostream>

using namespace std;

class Complex {
public:
    int a,b;
    void input(string s) {
        int v1=0;
        int i=0;
        while(s[i]!='+') {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i] == ' ' or s[i] == '+' or s[i] == 'i') {
            i++;
        }
        int v2 = 0;
        while (i < s.length()) {
            v2 = v2 * 10 + s[i] - '0';
            i++;
        }
        a = v1;
        b = v2;
    }
};

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

Complex operator + (Complex& num1, Complex& num2) {
    return {num1.a + num2.a, //real part
            num1.b + num2.b}; // complex part
}
ostream& operator<<(ostream& outStream, Complex& output) {
    outStream << output.a << "+i" << output.b;
    return outStream;
}

int main() {
    Complex x,y;
    string s1, s2;
    cin >> s1
        >> s2;
    x.input(s1);
    y.input(s2);
    Complex z = x+y;
    cout<<z << endl;
}