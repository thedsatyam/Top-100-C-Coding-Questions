#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    cout<<" a&b is "<<(a&b)<<endl;
    cout<<" a|b is "<<(a|b)<<endl;
    cout<<" ~b is "<<(~b)<<endl;
    cout<<" ~a is "<<(~a)<<endl;
    cout<<" a^b is "<<(a^b)<<endl;

    cout<<" a<<b "<<(17<<1)<<endl;
    cout<<" a<<b "<<(17<<2)<<endl;
    cout<<" a>>b "<<(17>>1)<<endl;
    cout<<" a>>b "<<(17>>2)<<endl;

    int i = 7;
    cout<< (++i) <<endl;
    cout<< (i++) <<endl;
    cout<< (i--) <<endl;
    cout<< (--i) <<endl;
    

    return 0;
}