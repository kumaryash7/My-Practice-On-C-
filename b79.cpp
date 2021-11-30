#include <iostream>
using namespace std;
class ShopItem
{

    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "the code of the item is " << id << endl;
        cout << "the price of the item is " << price << endl;
    }
};
int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int [34];

    ShopItem *ptr = new ShopItem[size];
    int p,q;

    for(int i=0;i<size;i++){

        cout<<" Enter Id and price of item "<<i+1;
        cin>>p>>q;
      ptr->setdata(p,q);
      ptr->getdata();
     
    }
for(int j=0;j<size;j++){
    cout<<"item number "<<j+1<<endl;
    ptr->getdata();

}
    return 0;
}