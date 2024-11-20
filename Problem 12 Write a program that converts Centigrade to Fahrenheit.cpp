#include<iostream>
using namespace std;
int main()
{
    double centi,fahr;
    cout<<"Enter the temperature in centigrade : ";
    cin>>centi;
    fahr=centi=(9*centi/5)+32;
    cout<<fahr<<"degree Fahrenheit";
    return 0;

}
