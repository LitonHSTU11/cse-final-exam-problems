#include<iostream>
using namespace std;
int main()
{
    double length, width,area,perimeter;
    cout<<"Enter the value of length of ractangle :";
    cin>>length;
    cout<<"Enter the value of width of ractangle :";
    cin>>width;
    area=length*width;
    perimeter=2*length+2*width;
    cout<<"The area of rectangle is :"<<area<<endl;
    cout<<"The area of perimeter is :"<<perimeter<<endl;
    return 0;
}
