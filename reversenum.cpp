#include<iostream>
using namespace std;
int main()
{
    int n,reverse=0,remainder;
    cout<<"Enter the number: ";
    cin>>n;
    while(n !=0){
        remainder=n%10;
        reverse= reverse*10 + remainder;
        n /= 10;
    }
    cout<<"Reverse number will be "<<reverse<<endl;
    return 0;
    
}