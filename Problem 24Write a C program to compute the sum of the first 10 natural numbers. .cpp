#include<iostream>
using namespace std;
int main()
{
    int sum;
    cout<<"The first 10 natural number is : "<<endl;
    for(int i=1;i<11;i++)
    {
        cout<<i<<" ";
        sum=sum+i;
    }
    cout<<endl;
    cout<<"The sum is : "<<sum;
return 0;

}

