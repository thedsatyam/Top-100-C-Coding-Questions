#include<iostream>
using namespace std;

void second_largest(int arr[], int n)
{
    int first,second;
    first=second=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>first)
        {
            second=first;
            first=arr[i];
        }
        else if (arr[i]>second && arr[i]!=first)
        {
            second=arr[i];
        }    
    }
    if(second==INT_MIN)
    {
        cout<<"No Second Largest Element"<<endl;
    }
    else
    {
        cout<<"Second Largest Element is "<<second<<endl;
    }
}

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin>> num[i];
    } 
    second_largest(num,size);
    return 0;
}