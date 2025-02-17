#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int length=0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    cout<<"The length of string is "<<length<<endl;

    return 0;
}