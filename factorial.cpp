#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    while (n>1)
    {
        fact *=n;
        n--;
    }
     return fact;
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Factorial of "<<num<< " is "<<factorial(num)<<endl;
    return 0;
}