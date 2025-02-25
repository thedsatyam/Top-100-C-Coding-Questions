#include<iostream>
using namespace std;
int setbits(int n)
{
    int count =0;
    while(n!=0)
    {
        if((n & 1) == 1)
        {
            count++;
        }
        n= n>>1;
    }
    return count;
}

int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the seconf number: ";
    cin>>b;
    cout<<"Total no. of setbits is "<<setbits(a)+ setbits(b)<<endl;
}