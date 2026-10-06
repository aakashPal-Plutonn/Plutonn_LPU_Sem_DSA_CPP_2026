#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;

    fout.open("file2.txt", ios::out);

    int num = 456;
    string name = "arush";

    fout << num;

    fout.close();


    return 0;
}