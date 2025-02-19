#include<iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;

    if(a-- >0 && ++b>2 ){
        cout<<"Stag1 - Inside If"<<endl;
    }
    else{
        cout<<"Stage2 - Inside Else"<<endl;
    }
    cout<<a<< " "<< b <<endl;
}