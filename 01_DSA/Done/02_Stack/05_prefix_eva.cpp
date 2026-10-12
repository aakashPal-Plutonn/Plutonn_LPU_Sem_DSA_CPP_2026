#include<stdio.h>
#include<iostream>
#include<string>

#include<vector>

#include<stack>

using namespace std;


int preFixExpEva(string exp){
    stack<int> st;

    

    for(int i = exp.length()-1; i >= 0 ; i--){
        char ch = exp[i];

        if(isdigit(ch)){
            st.push(ch - '0');
        } else {
            int result;

            int operand1 = st.top();
            st.pop();
            
            int operand2 = st.top();
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

    string exp = "-+2*345";

    int result = preFixExpEva(exp);

    cout << "Result : " << result << endl;

    return 0;
}