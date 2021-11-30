#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outf("ITEM.txt");
    cout << "enter item name" << endl;

    char name[30];
    cin >> name;

    outf << name << endl;

    cout << "enter item cost" << endl;
    float cost;
    cin>>cost;
    

    outf << cost << endl;

    outf.close();

    ifstream inf("ITEM.txt");
    inf >> name;
    inf >> cost;
    cout << endl;

    cout << "item name :" << name << endl;
    cout << "item cost :" << cost << endl;

    inf.close();

    return 0;
}