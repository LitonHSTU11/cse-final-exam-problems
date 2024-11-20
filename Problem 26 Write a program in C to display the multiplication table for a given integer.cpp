#include<iostream>
using namespace std;
int main()
{
    int i,x,n;
    cout<<"Enter the no. of multiplication table :";
    cin>>n;
    for(i=1;i<11;i++)
    {
    x=n*i;

    cout<< n<<"x"<<i<<"="<<x<<endl;
    }
    return 0;
    }
