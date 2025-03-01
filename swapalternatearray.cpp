#include<iostream>
using namespace std;

void swap(int arr[], int n)
{
        int temp=arr[1];
        arr[1]=arr[0];
        arr[0]=temp;
    // for (int i = 0; i < n; i++)
    // {
    //     swap(arr[i],arr[i+1]);
    //     i++;
    // }    
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
    // int arr[8]= {23,45,67,125,99,12,44,56};
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int num[size];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    
    swap(num,size);
    printarray(num,size);
    
    // swap(arr,8);
    // printarray(arr,8);
}