// inheritance using Modes : Public Inheritance

#include<stdio.h>
#include<iostream>
using namespace std;

class car{
    private:
        int var = 20;
    protected:
        string model;
        string brand;
        int gear = 0;
    public:
        int val = 10;
        void increamentGear(){
            gear++;
        }    
        void decreamentGear(){
            gear++;
        }    
};

class sportCar : public car{
    private:
        bool alert;
};


int main(){
    sportCar sp;
    sp.increamentGear();

    cout << sp.val;

    return 0;
}