//
// Created by Justin Chiu on 9/9/17.
//

#include <iostream>
using namespace std;

class Person{
protected:
    string name;
    int age;
};

class Professor : public Person{
public:
    //Members
    int publications;
    static int cur_id;

    //Constructor
    Professor() {
        cur_id++;
        getData();
        putData();
    }
private:
    //Member Functions
    void getData(){
        cin >> name
            >> age
            >> publications;
    }
    void putData(){
        cout << name << " "
             << age  << " "
             << publications << " "
             << cur_id << " "
             << endl;

    }

};

class Student : public Person{
public:
    //Members
    int a, b, c, d, e, f;
    static int cur_id;

    //Constructor
    Student(){
        cur_id++;
        getData();
        putData();
    }

    //Member Functions
    void getData(){
        cin >> name
            >> age
            >> a
            >> b
            >> c
            >> d
            >> e
            >> f;
    }
    void putData(){
        cout << name << " "
             << age  << " "
             << sumMarks() << " "
             << cur_id << " "
             << endl;
    }
private:
    int sumMarks(){
        return a + b + c + d + e + f;
    }
};

//Static Variable Declarations
int Professor::cur_id = 0;
int Student::cur_id = 0;

int main(){
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        int j;
        cin >> j;
        if (j == 1){
            new Professor;
        } else if (j == 2){
            new Student;
        }
    }
    return 0;
}