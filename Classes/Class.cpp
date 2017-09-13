//
// Created by Justin Chiu on 9/9/17.
//

#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class Student {
private:
    //Member Variables
    int age, standard;
    string firstName, lastName;
public:
    //Getters and Setters
    void setAge(int ageIn){
        age = ageIn;
    } int getAge() { return age; }

    void setStandard(int standardIn){
        standard = standardIn;
    } int getStandard() { return standard; }

    void setFirstName(string firstNameIn){
        firstName = move(firstNameIn);
    } string getFirstName(){ return firstName; }

    void setLastName(string lastNameIn){
        lastName = move(lastNameIn);
    } string getLastName(){ return lastName; }

    string toString() {
        stringstream stm;
        stm << age << ","
            << firstName << ","
            << lastName << ","
            << standard;
        return stm.str();
    }
};

int main(){
    int age, standard;
    string firstName, lastName;

    // take user input
    cin >> age
        >> firstName
        >> lastName
        >> standard;

    Student st;
    st.setAge(age);
    st.setFirstName(firstName);
    st.setLastName(lastName);
    st.setStandard(standard);

    // output class member variables
    cout << st.getAge() << endl
         << st.getLastName() << ", "
         << st.getFirstName()  << endl
         << st.getStandard() << endl
         << "\n"
         << st.toString();
}