#include<iostream>

using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character : ";
    cin>>ch;
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='0'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'||ch=='U')
    {
        cout<<"Vowel";
    }
    else
    {
        cout<<"Consonant";
    }

    return 0;

}
