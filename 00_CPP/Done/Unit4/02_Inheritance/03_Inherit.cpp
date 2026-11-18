// need of inheritance
    // create classes for person, student, teacher

// Solution 1: create distict classes for each and every one using inheritance.

#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

class person{
    protected:
        string name;
        int age;
        int gender;
    public:
        void setName(string n){
            name = n;
        }
        void setAge(int a){
            age = a;
        }
        void setgender(char g){
            gender = g;
        }
};

class student : public person{
    string course;
    string domain;
    public:
        void setCourse(string c){
            course = c;
        }
        void setdomain(string d){
            domain = d;
        }
        void getData(){
            cout << "name : " << name << endl;
            cout << "name : " << age << endl;
            cout << "name : " << gender << endl;
            cout << "course : " << course << endl;
        }

};


int main() {
    student s1;
    s1.setName("arush");
    s1.setgender('m');
    s1.setAge(21);
    s1.setCourse("btech");
    s1.setdomain("machine learning");

    s1

    s1.getData();
    return 0;
}