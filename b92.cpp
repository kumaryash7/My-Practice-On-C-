#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample60.txt");

    out << "this is me" <<endl;
    out<<"this is me also"<<endl;

    out.close();

    ifstream in;
    in.open("sample60.txt");
    string st;
    in>>st;
    cout<<st;


while(in.eof()==0){    //END OF FILE PRODRAM
    getline(in,st);
    cout<<st<<endl;

}
in.close();

    return 0;
}