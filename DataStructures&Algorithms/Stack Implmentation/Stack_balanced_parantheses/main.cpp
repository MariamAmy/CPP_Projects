#include <bits/stdc++.h>

#include"node.h"
#include"stack"
#include"balancedParantheses.h"

using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << endl;

    cout << (isBalancedParentheses(s) ? "Balanced\n" : "NotBalanced\n") << endl;

    cout << (isBalancedParentheses_(s) ? "Balanced\n" : "NotBalanced\n") << endl;

    return 0;
}
