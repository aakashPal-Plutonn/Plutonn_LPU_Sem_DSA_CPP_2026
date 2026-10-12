#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int num = 20; // 4 bytes
    double num2 = 450; // 12 bytes

    cout << sizeof(num) << endl;


    ofstream fout;
    fout.open("01_test.txt", ios::binary|ios::out|ios::trunc);
    // want to write the data in form of bytes - then we will have to use the methods

    // writing -> write
    fout.write(reinterpret_cast<char*>(&num), sizeof(num));
    fout.write(reinterpret_cast<char*>(&num2), sizeof(num2));
    
    fout.close();
    
    ifstream fin;
    fin.open("01_test.txt", ios::binary|ios::in);
    
    int readNUm;
    double readNUm2;
    
    // reading -> read
    fin.read(reinterpret_cast<char*>(&readNUm), sizeof(readNUm));
    fin.read(reinterpret_cast<char*>(&readNUm2), sizeof(readNUm2));

    cout << readNUm << endl << readNUm2;

    fin.close();


    return 0;
}