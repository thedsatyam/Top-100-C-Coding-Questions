#include<iostream>
using namespace std;
bool test(int x)
{
    if(abs(x-100)<=10 || abs(x-200)<=10)
    {
        return true;
        return false;
    }
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<test(n);
}