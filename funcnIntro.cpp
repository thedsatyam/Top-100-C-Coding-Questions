#include<iostream>
using namespace std;
int power(int num1,int num2)
{
   int ans=1;
   for (int i = 1; i <=num2; i++)
   {
     ans= ans*num1;
   }
    return ans;
   
}
int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
   int ans=power(a,b);
   cout<<"Answer is "<<ans<<endl;
}