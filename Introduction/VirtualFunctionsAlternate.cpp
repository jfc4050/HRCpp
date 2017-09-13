//
// Created by Justin Chiu on 9/9/17.
//

#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

class Person {
protected:
    //Members
    string name;
    int age;
public:
    //Member Functions
    virtual void getdata() {}
    virtual void putdata() {}
};

class Professor : public Person{
public:
    //Members
    int publications;
    int id1;
    static int cur_id1;

    //Constructor
    Professor() {
        cur_id1++;
    }
private:
    //Member Functions
    void getdata() override {
        cin >> name
            >> age
            >> publications;
        id1 = cur_id1;
    }
    void putdata() override {
        cout << name << " "
             << age  << " "
             << publications << " "
             << id1 << " "
             << endl;

    }
}; int Professor::cur_id1 = 0;

class Student : public Person{
public:
    //Members
    int a, b, c, d, e, f;
    int id2;
    static int cur_id2;

    //Constructor
    Student(){
        cur_id2++;
    }

    //Member Functions
    void getdata() override {
        cin >> name
            >> age
            >> a
            >> b
            >> c
            >> d
            >> e
            >> f;
        id2 = cur_id2;
    }
    void putdata() override {
        cout << name << " "
             << age  << " "
             << sumMarks() << " "
             << id2 << " "
             << endl;
    }
private:
    int sumMarks(){
        return a + b + c + d + e + f;
    }
}; int Student::cur_id2 = 0;


int main()
{
    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){
        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        } else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }
    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.
    return 0;
}

