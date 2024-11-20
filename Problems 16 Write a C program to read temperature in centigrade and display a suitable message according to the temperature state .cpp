#include<iostream>
using namespace std;
int main()
{
    int temp;
    cout<<"Enter temperature : ";
    cin>>temp;
    if(temp<0)
    {
        cout<<"Freezing weather";
    }
    else if(temp>0&&temp<11)
    {
        cout<<"Very  cold weather";
    }
    else if(temp>10&&temp<21)
    {
        cout<<"cold weather";
    }
    else if(temp>20&&temp<31)
    {
        cout<<"Normal Temperatue";
    }
     else if(temp>30&&temp<41)
    {
        cout<<"It's Hot";
    }
    else
    {
        cout<<"It's very hot";
    }

  return 0;

}

