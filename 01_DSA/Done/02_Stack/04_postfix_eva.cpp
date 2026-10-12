#include<stdio.h>
#include<iostream>
#include<string>

#include<vector>

#include<stack>

using namespace std;


int postFixExpEva(string exp){
    stack<int> st;

    for(int i = 0; i < exp.length(); i++){
        char ch = exp[i];

        if(isdigit(ch)){
            st.push(ch - '0');
        } else {
            int result;

            int operand2 = st.top();
            st.pop();
            int operand1 = st.top();
            st.pop();

            if(ch == '+'){
                result = operand1 + operand2;
            } else if(ch == '-'){
                result = operand1 - operand2;
            } else if(ch == '*'){
                result = operand1 * operand2;
            } else {
                result = operand1 / operand2;
            }
            st.push(result);
        }
    }
    return st.top();
}


int main(){

    string exp = "234*+5-";

    int result = postFixExpEva(exp);

    cout << "Result : " << result << endl;

    return 0;
}