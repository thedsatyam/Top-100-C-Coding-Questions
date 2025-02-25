#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<endl;
    switch (n)
    {
      case 1: cout<<"First"<<endl;
      break;

      case 2: cout<<"This is character"<<endl;
      break;

      default: cout<<"This is default case."<<endl;
        break;
    }
}