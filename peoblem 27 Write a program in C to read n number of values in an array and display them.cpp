#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the value of n:";
cin>>n;
int a[n];
for(int i=0;i<=n;i++)
{
    cin>>a[i];
}
for(int i=0;i<=n;i++)
{
    cout<<a[i]<<" ";

}
return 0;
}
