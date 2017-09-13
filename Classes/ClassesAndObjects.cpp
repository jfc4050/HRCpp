//
// Created by Justin Chiu on 9/9/17.
//

#include <cstdio>
#include <iostream>
#include <array>

using namespace std;

class Student{
private:
    array<int,5> scores;
public:
    void input(){
        int a, b, c, d, e;
        cin >> a
            >> b
            >> c
            >> d
            >> e;
        scores = {a, b, c, d, e};
    }
    int calculateTotalScore(){
        int total = 0;
        for (int score : scores) {
            total += score;
        }
        return total;
    }
};

int main() {
    //generate array of n(user input) students
    int n;
    cin >> n;
    Student *s = new Student[n];

    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if (total > kristen_score){
            count++;
        }
    }
    // print result
    cout << count;

    return 0;
}

