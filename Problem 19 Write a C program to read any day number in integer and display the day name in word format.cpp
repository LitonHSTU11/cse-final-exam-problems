#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the no. of day : ";
    cin>>a;
    if(a==1)
    {
        cout<<"saturday";
    }
    else if(a==2)
    {
        cout<<"sunday";
    }
    else if(a==3)
    {
        cout<<"monday";
    }
    else if(a==4)
    {
        cout<<"thuesday";
    }
     else if(a==5)
    {
        cout<<"wensday";
    }else if(a==6)
    {
        cout<<"thursday";
    }
    else if(a==7)
    {
        cout<<"friday";
    }
    else
    {
        cout<<"You press wrong number";
    }
  return 0;

}
