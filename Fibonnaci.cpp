#include<iostream>
using namespace std;
int main()
{
    int n, first=0, second=1, ans=0;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Fibonnaci Series: ";
    
    
    for (int i = 1; i <=n; ++i)
    {
        if (i==1)
        {
            cout<<first<<", ";
            continue;
        }
        if (i==2)
        {
            cout<<second<<", ";
            continue;
        }
        ans=first+second;
        first=second;
        second=ans;
        cout<<ans<<", ";
    }
    return 0;
    
}
