#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    float a,b;
    int Sine;
    int Square;
    int Power;
    int Cos;
    int Tan;
    int Log;
    int Baselog;
    

    int n;
    cout<<"What do you want to find? "<<endl;
    cout<<"PRESS 1 to perform Power "<<endl;
    cout<<"PRESS 2 to perform Sin "<<endl;
    cout<<"PRESS 3 to perform Square "<<endl;
    cout<<"PRESS 4 to perform Cos "<<endl;
    cout<<"PRESS 5 to perform Tan "<<endl;
    cout<<"PRESS 6 to perform Log "<<endl;
    cout<<"PRESS 7 to perform Addition "<<endl;
    cout<<"PRESS 8 to perform Subtraction "<<endl;
    cout<<"PRESS 9 to perform Multiplication "<<endl;
    cout<<"PRESS 10 to perform Division "<<endl;


    cin>>n;
    switch(n)
    {
        case 1: cout<<"Enter the first number: ";
                cin>>a;
                cout<<"Enter the second number: ";
                cin>>b;
                cout<<pow(a,b)<<endl;
                break;
        case 2: cout<<"Enter the  number: ";
                cin>>a;
                cout<<sin(a)<<endl;
                break;
        case 3: cout<<"Enter the first number: ";
                cin>>a;
                cout<<sqrtf(a)<<endl;
                break;
        case 4: cout<<"Enter the  number: ";
                cin>>a;
                cout<<cos(a)<<endl;
                break;
        case 5: cout<<"Enter the  number: ";
                cin>>a;
                cout<<tan(a)<<endl;
                break;
        case 6: cout<<"Enter the  number: ";
                cin>>a;
                cout<<log(a)<<endl;
                break;
        case 7: cout<<"Enter the first number: ";
                cin>>a;
                cout<<"Enter the second number: ";
                cin>>b;
                cout<<a+b<<endl;
                break;
        case 8: cout<<"Enter the first number: ";
                cin>>a;
                cout<<"Enter the second number: ";
                cin>>b;
                cout<<a-b<<endl;
                break;
        case 9: cout<<"Enter the first number: ";
                cin>>a;
                cout<<"Enter the second number: ";
                cin>>b;
                cout<<a*b<<endl;
                break;
        case 10: cout<<"Enter the first number: ";
                cin>>a;
                cout<<"Enter the second number: ";
                cin>>b;
                cout<<a/b<<endl;
                break;                         

    }    

    
    
}