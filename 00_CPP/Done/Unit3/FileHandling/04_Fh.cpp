#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    ifstream fin;
    int num1 = 452;
    int num2 = 10;
    int num3;
    int num4;

    fout.open("file3.txt", ios::out|ios::binary);
    
    // fout.write( &num, sizeof(num));
    
    fout.write(reinterpret_cast<char*>(&num1), sizeof(num1));
    
    // fout << num1;
    
    // c syntax for type casting while dealing with binary bytes data
    // fout.write((char*)&num1, sizeof(num1));
    
    fout.write(reinterpret_cast<char*>(&num2), sizeof(num2));


    fout.close();

    fin.open("file3.txt", ios::in|ios::binary);

    fin.read(reinterpret_cast<char*>(&num3), sizeof(num3));
    fin.read(reinterpret_cast<char*>(&num4), sizeof(num4));

    cout << num3 << endl;
    cout << num4 << endl;


    fin.close();
    
    

    return 0;
}