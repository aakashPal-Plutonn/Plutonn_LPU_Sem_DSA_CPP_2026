// Recursion is a programming technique in which
// - a function calls itself **
// - to solve a smaller version of the same problem
// - until a specidied condition meet. **


// ├── Print name n times


// ├── Print Numbers from N to 1

// ├── Print Numbers from 1 to N


#include<stdio.h>
#include<iostream>
using namespace std;

void printNaturaldec(int num){
    if(num == 0){
        return;
    }
    
    cout << num << " ";
    printNaturaldec(num-1); 
}

void printNaturalAcen(int num){
    if(num == 0){
        return;
    }
    printNaturaldec(num-1); 
    cout << num << " ";

}

int main(){
    int num = 5;

    printNaturaldec(num);
    cout << endl;
    printNaturalAcen(num);
    cout << endl;

    return 0;
}