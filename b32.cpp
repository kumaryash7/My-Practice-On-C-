#include <iostream>
#include <string>
using namespace std;

class Shop
{
    int itemid[100];
    int itemprice[100];
    int counter;
 
public:
    void initcounter(void) { counter = 0; }

    void setprice();
    void displayprice();
};

void Shop ::setprice()
{
    cout << "enter id of the item " << endl;
    cin >> itemid[counter];
    cout << "enter price of the item " << endl;
    cin >> itemprice[counter];
}
void Shop ::displayprice()
{

    for (int i = 0; i < counter; i++)
    {

        cout << "the price of item with id " << itemid[i] << "is " << itemprice[i] << endl;
    }
}

int main()
{
    Shop dukan;

    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();

    return 0;
}