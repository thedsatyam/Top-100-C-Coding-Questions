#include<iostream>
using namespace std;

int sortArray(int arr[], int n)
{
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }  
        }   
    }
    int start= arr[0];
    int end = arr[n-1];
    cout<<"First and Last Element is "<<start<<" , " <<end<<endl; 
    // cout<<"Sorted Array: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" , ";
    // }
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin>>num[i];
    }
    sortArray(num, n);
}


