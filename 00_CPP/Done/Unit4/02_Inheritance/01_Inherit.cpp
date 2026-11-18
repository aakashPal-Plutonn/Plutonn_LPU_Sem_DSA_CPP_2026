// need of inheritance
    // create classes for person, student, teacher

// Solution 1: create distict classes for each and every one.

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
        void setName(string n){
            name = n;
        }
        void getData(){
            cout << "Name : " << name << endl;
            cout << "age : " << age << endl;
            cout << "gender : " << gender << endl;
        }
};

class student{
    private:
        string name;
        int age;
        int gender;
        string course;
        int roll;
        string domain;
    public:
        void setName(string n){
            name = n;
        }    
    
    void getData(){
            cout << "Name : " << name << endl;
            cout << "age : " << age << endl;
            cout << "gender : " << gender << endl;
            cout << "course : " << course << endl;
            cout << "roll : " << roll << endl;
            cout << "domain : " << domain << endl;
        }
};

class teacher{
    private:
        string name;
        int age;
        int gender;
        int id;
        int salary;
        string researchArea;
    public:
        void setData(string & n, int a, int g, int i, int s, string& r){
            name = n;
            age = a;
            gender = g;
            id = i;
            salary = s;
            researchArea = r;
        }
        void getData(){
            cout << "Name : " << name << endl;
            cout << "age : " << age << endl;
            cout << "gender : " << gender << endl;
            cout << "id : " << id << endl;
            cout << "salary : " << salary << endl;
            cout << "researchArea : " << researchArea << endl;
        }
};

int main() {
    person p;
    student s;
    teacher t;

    // Person data
    string name1 = "Rahul";
    p.setData(name1, 25, 1);

    // Student data
    string name2 = "Aman";
    string course = "B.Tech";
    string domain = "Computer Science";
    s.setData(name2, 20, 1, course, 101, domain);

    // Teacher data
    string name3 = "Dr. Sharma";
    string research = "Artificial Intelligence";
    t.setData(name3, 45, 1, 501, 80000, research);

    // Display person details
    cout << "\n--- Person Details ---" << endl;
    p.getData();

    // Display student details
    cout << "\n--- Student Details ---" << endl;
    s.getData();

    // Display teacher details
    cout << "\n--- Teacher Details ---" << endl;
    t.getData();

    return 0;
}