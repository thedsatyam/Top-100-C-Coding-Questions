#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n>0){
        cout<<"Positive"<<endl;
    }
    else if (n<0)
    {
        cout<<"Shit it is Negative!!"<<endl;
    }
    else{
        cout<<"It is zero"<<endl;
    }
    return 0;
    
}