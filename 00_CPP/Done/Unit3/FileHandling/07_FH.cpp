#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;

class student{
    public:
    char name[20];
    int age;
    int roll;
};

int main(){
    student sObj[3] = {
        {"Udit", 19, 35},
        {"Arush", 29, 395},
        {"Aman", 99, 75},
    };

    student sIn[3];
    
    ofstream fout;
    ifstream fin;
    
    fout.open("studentData.txt", ios::out|ios::binary);
    fout.write(reinterpret_cast<char*>(sObj), sizeof(sObj));
    fout.close();
    
    fin.open("studentData.txt", ios::in|ios::binary); 
    fin.read(reinterpret_cast<char*>(sIn), sizeof(sIn));
    fin.close();

    for(int i = 0; i < 3; i++){
        cout << "Student " << i+1 << " from sIn " << sIn[i].name << " " << sIn[i].age << " " << sIn[i].roll << endl;
    }
    return 0;
}