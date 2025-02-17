#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, originalNum, remainder, n=0, 
    result =0, power;
    cout<<"Enter a number: ";
    cin>>num;

    originalNum = num;

    while(originalNum != 0){
        originalNum /= 10;
        ++n;
    }
    originalNum=num;

    while(originalNum !=0){
        remainder = originalNum % 10;
        power =round(pow(remainder, n));
        result += power;
        originalNum /= 10;
    }

    if(result == num){
        cout<<"This is Armstrong Number"<<endl;
    }
    else{
        cout<<"Not a Armstrong Number"<<endl;
    }
    return 0;
}