#include<stdio.h>
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

int main(){

    ifstream fin;

    fin.open("file1.txt");

    string str;

    // fin >> str;

    getline(fin, str);

    cout << str;

    fin.close();
    // cout << ch;


    return 0;
}