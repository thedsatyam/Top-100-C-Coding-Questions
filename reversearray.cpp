#include<iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;  
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    cout<<"Enter the size of array: ";
    int size;
    cin>>size;
    int num[size];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }

    // int arr[5]={32, -98, 87,2, 45};

    reverse(num, size);
    printarray(num,size);

    
}
