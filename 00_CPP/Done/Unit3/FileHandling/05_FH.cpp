#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    fstream fobj;
    string str;

    fobj.open("file4.txt", ios::out|ios::in);
    if(fobj.is_open()){
        cout << "opened"<< endl;
    } else {
        cout << "Not opened"<< endl;
    }
    
    fobj << "here we are discussing about file handling" << endl;
    
    cout << fobj.tellg();
    
    fobj.seekg(12);

    getline(fobj, str);

    cout << str;
    
    
    
    fobj.close();
    
    ////////////////////////////////////

    // fobj.open("file4.txt", ios::out|ios::in);
    
    // fobj.close();

    return 0;
}