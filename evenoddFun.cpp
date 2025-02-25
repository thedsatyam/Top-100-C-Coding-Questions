#include<iostream>
using namespace std;

int isEven(int a)
{
    if(a%2==0)
    {
        cout<<"EVEN"<<endl;
    }
    else
    {
        cout<<"ODD"<<endl;
    }
    
}

int main()
{
  int a;
  cout<<"Enter the number: ";
  cin>>a;
  int num=isEven(a);
  
}