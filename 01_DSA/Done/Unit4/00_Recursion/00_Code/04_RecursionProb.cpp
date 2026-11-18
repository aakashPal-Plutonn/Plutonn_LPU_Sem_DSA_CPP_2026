#include<stdio.h>
#include<iostream>
using namespace std;

int sumNatural(int num){
    if(num == 1){
        return 1;
    }

    return num + sumNatural(num-1);
    
}

int fact(int num){
    if(num <= 1){
        return 1;
    }
    
    return num * fact(num-1);
}

int main(){
    int num = 20;
    int result = sumNatural(num);
    cout << result<< endl;
    
    result = fact(num);
    cout << result<< endl;

    return 0;
}