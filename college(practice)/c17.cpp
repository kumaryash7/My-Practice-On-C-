#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "ENTER A STRING" << endl;

    cin >> s;
    // REVERSE A STRING
    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}