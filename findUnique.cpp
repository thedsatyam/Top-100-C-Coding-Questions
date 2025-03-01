#include<iostream>
using namespace std;

void unique(int arr[], int n)
{
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    }
    cout<<"Unique among these number is "<<ans<<endl;
}

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int num[size];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    unique(num,size);  
}