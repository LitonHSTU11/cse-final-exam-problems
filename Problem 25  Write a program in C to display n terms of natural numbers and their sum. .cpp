#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"The natural number is : "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
        sum=sum+i;
    }
    cout<<endl;
    cout<<"The sum"<<n<<"natural number is : "<<sum;
return 0;

}

