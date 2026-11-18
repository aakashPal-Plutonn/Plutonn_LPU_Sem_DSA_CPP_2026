// Multiple inheritance

#include <iostream>
using namespace std;

class inputClass{
    public:
        void input(){
            cout << "input done" << endl;
        }
};

class outputClass{
    public:
        void output(){
            cout << "output done" << endl;
        }
};

class all : public inputClass, public outputClass{
    int num = 10;
};


int main() {
    all obj;

    obj.input();
    obj.output();

    return 0;
}