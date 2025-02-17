#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the alphabet: ";
    cin>>ch;
    if (ch =='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u'||
        ch== 'A' || ch=='E'|| ch=='I' || ch=='O' || ch=='U')
    {
        cout<<"This is Vowel"<<endl;
    }
    else{
        cout<<"Consonent"<<endl;
    }
    
    return 0;
    
}