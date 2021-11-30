#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream hout("sample60.txt");
    cout << "Enter your name";

    string name;
    cin >> name;

    hout << name;
    hout.close(); // THE CONNNECTION BETWEEN THE PROGRAM AND THE FILE CLOSES

    ifstream hin("smaple.txt");
    string content;
    hin >> content;
    cout << "the content of the file is " << endl
         << content;
    hin.close();

    return 0;
}