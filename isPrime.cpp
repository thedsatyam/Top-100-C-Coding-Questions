#include<iostream>
using namespace std;

//Function Signature
void isPrime(int n)
{
    //Function Body
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            cout<<"Not a Prime"<<endl;
            break;
        }
        else
        {
            cout<<"Prime"<<endl;
            break;
        }
    }  
}

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    //Function Call
    isPrime(a);
}