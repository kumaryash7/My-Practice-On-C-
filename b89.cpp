#include <iostream>
#include <string>
#include <fstream> // PREDEFINED CLASSES IN C++
using namespace std;

int main()

{

    string st = "harry bhai";
  string s2;

    ofstream out("sample89.txt");
    out << st;   //writing in a file

  ifstream in("sample89b.txt");   //READING A FILE
  getline(in,st);
  cout<<st;

 
    return 0;
}