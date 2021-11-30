#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num[] = {55, 75, 22, 18, 90};
    cout << "the elements of the array is " << endl;

    int *ptr;
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << endl;
    }
  

  ptr=num;

  cout<<"the vlaue of pointer is :"<<*ptr<<endl;
  ptr++;

  cout<<"the vlaue of ptr++ is :"<<*ptr<<endl;
  ptr--;

  cout<<"the vlaue of ptr-- is :"<<*ptr<<endl;
  ptr+=2;

  cout<<"the vlaue of ptr+2 is :"<<*ptr<<endl;

    return 0;
}