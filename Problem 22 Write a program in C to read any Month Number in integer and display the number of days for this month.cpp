#include<iostream>
using namespace std;
int main()
{
    int a ,year;
    cout<<"Enter the no. of month : ";
    cin>>a;
    cout<<"Enter year : ";
    cin>>year;
    if(a==1)
    {
        cout<<"31 days";
    }
    else if(a==2)
    {
        if(year%4==0)
        {
            cout<<"29 days";
        }
        else
        {
            cout<<"28 days";
        }
    }
    else if(a==3)
    {
        cout<<"31days";
    }
    else if(a==4)
    {
        cout<<"30 days";
    }
     else if(a==5)
    {
        cout<<"31 days";
    }else if(a==6)
    {
        cout<<"30 days";
    }
    else if(a==7)
    {
        cout<<"31 days";
    }
    else if(a==8)
    {
        cout<<"31 days";
    }
    else if(a==9)
    {
        cout<<"30 days";
    }
    else if(a==10)
    {
        cout<<"31 days";
    }
    else if(a==11)
    {
        cout<<"30 days";
    }
    else if(a==12)
    {
        cout<<"31 days";
    }
    else
    {
        cout<<"You press wrong number";
    }
  return 0;

}
