#include<stdio.h>
#include<iostream>
#include<stack>
#include<string>
using namespace std;

int evaluatePostExp(string str){
    stack<int> st;

    for(int i = 0; i < str.length(); i++){
        char ch = str[i];

        // check the ch is a operand or not
        if(isdigit(ch)){
            st.push(ch - '0');
        }

        else {
            int operand2 = st.top();
            st.pop();

            int operand1 = st.top();
            st.pop();


            int result;

            if(ch == '+'){
                result = operand1 + operand2;
            } else if(ch == '-'){
                result = operand1 - operand2;
            } else if(ch == '*'){
                result = operand1 * operand2;
            } else if(ch == '/'){
                result = operand1 / operand2;
            }

            st.push(result);

        }
    }

    return st.top();
}


int evaluatePreExp(string str){
    stack<int> st;

    for(int i = str.length()-1 ; i >= 0; i--){
        char ch = str[i];

        // check the char is a operand or not
        if(isdigit(ch)){
            st.push(ch - '0');
        }

        else {
            int operand1 = st.top();
            st.pop();

            int operand2 = st.top();
            st.pop();


            int result;

            if(ch == '+'){
                result = operand1 + operand2;
            } else if(ch == '-'){
                result = operand1 - operand2;
            } else if(ch == '*'){
                result = operand1 * operand2;
            } else if(ch == '/'){
                result = operand1 / operand2;
            }

            st.push(result);

        }
    }

    return st.top();
}



int main(){
    // string exp = "437*-2+"; // postfix exp
    string exp = "+-4*372"; // prefix exp

    int result = evaluatePreExp(exp);

    cout << result;

    return 0;
}