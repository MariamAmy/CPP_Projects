#ifndef BALANCEDPARANTHESES_H_INCLUDED
#define BALANCEDPARANTHESES_H_INCLUDED

#include<bits/stdc++.h>

#include"node.h"
#include"stack.h"

using namespace std;

bool isEqualPair(char, char);
bool isBalancedParentheses_(string);

bool isBalancedParentheses(string); // using Map


bool isEqualPair(char open, char close){
    if (open == '(' && close == ')')
        return true;
	else if (open == '{' && close == '}')
		return true;
	else if (open == '[' && close == ']')
		return true;
	else
		return false;
}

bool isBalancedParentheses_(string str){
    Stack <char> s;

    for(size_t i = 0; i < str.length(); i++){
        if(isalpha(str[i]) || isdigit(str[i]) || str[i]==' ')
            continue;
        else if(str[i] == '(' || str[i] == '{' || str[i] == '[')
                    s.push(str[i]);
        else{
            if(s.isEmpty())
                return false;
            else if(isEqualPair(s.getTop(), str[i]))
                s.pop();
            else
                return false;
        }
    }
    return s.isEmpty();
}

bool isBalancedParentheses(string str){
    Stack <char> s;
    map <char, char> mp;

    mp[')'] = '(';
    mp['}'] = '{';
    mp[']'] = '[';

    for(size_t i = 0; i < str.length(); i++){
        if(isalpha(str[i]) || isdigit(str[i]) || str[i]==' ')
            continue;
        else if(mp.count(str[i])){
            if(s.isEmpty())
                return false;
            else if(s.getTop() == mp[str[i]])
                s.pop();
            else
                return false;
        }
        else
            s.push(str[i]);
    }
    return s.isEmpty(); // if the stack is empty then return true
}


#endif // BALANCEDPARANTHESES_H_INCLUDED
