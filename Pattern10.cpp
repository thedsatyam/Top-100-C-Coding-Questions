#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        int j =1;
        int count ='A';
        while (j<=n)
        {
            char ch='A' + j-1;
            cout<<ch;
            count++;
            j++;
    
        }
        cout<<endl;
        i++;   
    }
    return 0;
}