#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter those three numbers: ";
    cout<<" ";
    cin>>a;
    cout<<" ";
    cin>>b;
    cout<<" ";
    cin>>c;

    if(a>b && a>c){
        cout<<"Greatest among these numbers is "<< a<<endl;
    }

    else if(b>a && b>c){
        cout<<"Greatest among these numbers is "<< b<<endl;
    }

    else{
        cout<<"Greatest among these numbers is "<<c<<endl;
    }
    return 0;
}