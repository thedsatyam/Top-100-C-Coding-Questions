#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cout<<"Enter the number used for reference: ";
    cin>>n;
    cout<<"Enter the number: ";
    cin>>a;
    if (a<=n)
    {
        cout<<n-a<<endl;
    }
    else if(a>n)
    {
        cout<<(a-n)*3<<endl;
    }
    
}