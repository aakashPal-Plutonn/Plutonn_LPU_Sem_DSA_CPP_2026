#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;

struct student{
    char name[20];
    int age;
    int roll;
};

int main(){
    student s1 = {"Udit", 19, 35};
    
    student s2;

    ofstream fout;
    ifstream fin;
    fout.open("studentData.txt", ios::out|ios::binary);

    // first method
    // fout << s1.name << endl;
    // fout << s1.age << endl;
    // fout << s1.roll << endl;


    // second method
    fout.write(reinterpret_cast<char*>(&s1), sizeof(s1));

    fout.close();
    
    
    fin.open("studentData.txt", ios::in|ios::binary);
    
    fin.read(reinterpret_cast<char*>(&s2), sizeof(s2));

    cout << s2.name << " " << s2.roll;
    
    fin.close();
    return 0;
}