#include<iostream>
using namespace std;

void sum(int arr[], int n)
{
    int sum=0;
    for (int i = 0; i <=n; i++)
    {
        sum += arr[i];
    }
    cout<<"Total sum of element is "<<sum<<endl;

    
}
int main()
{
    int size;
    cin>>size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        //taking input as array
        cin>>arr[i];
    }
     sum(arr, size);
    
}