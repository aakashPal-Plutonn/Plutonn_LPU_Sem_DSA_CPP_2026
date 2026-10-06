#include<stdio.h>
#include<iostream>
#include<fstream>
#include<conio.h>


using namespace std;

int main(){
    ofstream fout;

    getch();    
    fout.open("file1.txt", ios::app);
    
    // getch();    
    fout  << "Pushkar";
    
    // getch();    
    fout.close();

    return 0;
}