#include<iostream>

using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character : ";
    cin>>ch;
    if(ch>='a'&& ch<='z'|| ch>='A'&& ch<='Z')
    {
        cout<<"character";
    }
    else if(ch>='0'&& ch<='9')
    {
        cout<<"Digit";

    }
    else
    {
        cout<<"special character";
    }

    return 0;

}
