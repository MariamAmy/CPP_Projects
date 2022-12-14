#include<bits/stdc++.h>
#include<iostream>

#include"stack.h"

using namespace std;

template <class t>
t operation(t left, t right, char op){
    if(op == '+')        return left + right;
	else if(op == '-')   return left - right;
	else if(op == '*')   return left * right;
	else if(op == '/')   return left / right;
	else if(op == '%')   return (int) left % (int) right;
	else if(op == '^')   return (int) left ^ (int) right;
	else                 return 1;
}

float evalutePostfixExpression(string str){
    Stack <float> s;
    for(size_t i = 0; i < str.length(); i++){
        if(str[i] == ' ')
            continue;
        else if(isdigit(str[i]))
            s.push(str[i] - '0');
        else{
            auto right = s.getTop();
            s.pop();
            auto left = s.getTop();
            s.pop();
            auto result = operation(left, right, str[i]);
            s.push(result);
        }
        s.print();
    }
    return s.getTop();
}


int main()
{
    string s;
    cout << "Enter a postfix expression to be evaluated: " << endl;
    getline(cin, s);
    cout << "Postfix Evaluation: \n" << evalutePostfixExpression(s) << endl;
    return 0;
}
