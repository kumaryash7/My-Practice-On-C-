#include <iostream>
#include <string>
using namespace std;

class Phone
{

    string s1;
    string s2;

public:
    void setdata();

    void getdata();
};

void Phone :: setdata(){


    cout<<"enter string s1"<<endl;
    getline(cin,s1);
      
void Phone :: getdata(){
    cout<<"the value od s1 is "<<endl;
    cout<<s1;
    
}

}

int main()
{

    return 0;
}