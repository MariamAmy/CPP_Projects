#include<bits/stdc++.h>
#include <iostream>

#include"stack.h"

using namespace std;

string toPostfix(string);
bool isOperator(char);
int precednce(char);

int main()
{
    string s;
    cout << "Enter the infix expression: ";
    getline(cin, s);
    cout << "The postfix expression is: " << toPostfix(s) << endl;
    return 0;
}


bool isOperator(char op)
{
	if (op == '+' || op == '-' || op == '*' || op == '^' || op == '/' || op == '%')
		return true;
	else
		return false;
}

int precedence(char op){
    switch(op){
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
        case '%':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}

string toPostfix(string str){
    Stack <char> s;
    string result="";

    for(size_t i = 0; i < str.length(); i++){
        if(str[i] == ' ')
            continue;

        else if(isdigit(str[i]))
            result += str[i];

        else if(str[i] == '(')
            s.push(str[i]);

        else if(str[i] == ')'){
            while(s.getTop() != '('){
                result += s.getTop();
                s.pop();
            }
            s.pop();
        }

        else if(isOperator(str[i])){
            while(!s.isEmpty() && precedence(str[i]) <= precedence(s.getTop())){
                result += s.getTop();
                s.pop();
            }
            s.push(str[i]);
        }
    }

    while(!s.isEmpty()){
        result += s.getTop();
        s.pop();
    }

    return result;
}




