#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            cout<<"Not a Prime"<<endl;
            break;
        }
        else{
            cout<<"Prime"<<endl;
        }
        
    }
    return 0;
    
}