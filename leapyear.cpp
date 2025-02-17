#include<iostream>
using namespace std;
int main()
{  
    int n;
    cout<<"Enter the year : ";
    cin>>n;

    if (n%400==0 || n%4==0)
    {
        cout<<"Leap Year"<<endl;
    }
    else{
        cout<<"Not a Leap Year"<<endl;
    }

}