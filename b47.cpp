#include <iostream>
using namespace std;
class item
{
    int number;
    float cost;

public:
    void getdata(int a, float b);

    void putdata()
    {

        cout << "number " <<number<< endl;
        cout << "cost" <<cost  <<  endl;
    }
};

void item ::getdata (int a ,float b){
    number =a;
    cost =b;

}

int main()
{
item rice;
rice.getdata(5,237823.22);
rice.putdata();

    return 0;
}