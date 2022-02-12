#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;

    cin >> s1;

    string s2;
    cin >> s2;

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] >= 65 && s1[i] <= 90)
        {
            s1[i] += 32;
        }
    }
    
    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] >= 65 && s2[i] <= 90)
        {
            s2[i] += 32;
        }
    }
   

    cout << s1.compare(s2);

    return 0;
}