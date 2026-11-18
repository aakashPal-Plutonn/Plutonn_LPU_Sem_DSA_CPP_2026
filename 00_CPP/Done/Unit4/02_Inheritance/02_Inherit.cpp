// need of inheritance
    // create classes for person, student, teacher

// Solution 2: create distict classes for each and every one but this time create only new properties in student and teacher class.

#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

class person{
    private:
        string name;
        int age;
        int gender;
    public:
        void setData(string & n, int a, int g){
            name = n;
            age = a;
            gender = g;
        }
        void getData(){
            cout << "Name : " << name << endl;
            cout << "age : " << age << endl;
            cout << "gender : " << gender << endl;
        }
};

class student{
    private:
        string course;
        int roll;
        string domain;
    public:
        void setData(string& c, int r, string& d){
            course = c;
            roll = r;
            domain = d;
        }
        void getData(){
            cout << "course : " << course << endl;
            cout << "roll : " << roll << endl;
            cout << "domain : " << domain << endl;
        }
};

class teacher{
    private:
        int id;
        int salary;
        string researchArea;
    public:
        void setData(int i, int s, string& r){
            id = i;
            salary = s;
            researchArea = r;
        }
        void getData(){
            cout << "id : " << id << endl;
            cout << "salary : " << salary << endl;
            cout << "researchArea : " << researchArea << endl;
        }
};

int main() {    
    // Student data : to represent a student we need one object of person class and one object of student class
    person p1;
    student s;
    
    string name = "Riya";
    string course = "B.Tech";
    string domain = "Computer Science";
    
    p1.setData(name, 19, 2);
    s.setData(course, 101, domain);
    
    // Teacher data : to represent a student we need one object of person class and one object of teacher class
    person p2;
    teacher t;
    name = "Dr. Mahesh";
    string research = "Artificial Intelligence";
    p2.setData(name, 35, 1);
    t.setData(501, 80000, research);

    
    // Display student details
    cout << "\n--- Student Details ---" << endl;
    p1.getData();
    s.getData();
    
    // Display teacher details
    cout << "\n--- Teacher Details ---" << endl;
    p2.getData();
    t.getData();

    return 0;
}