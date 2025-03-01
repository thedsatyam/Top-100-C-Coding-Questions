#include<iostream>
using namespace std;

int thirdLargest(int arr[], int n)
{
    int  first, second,third;
    
    third=second=first=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>first)
        {
            third=second;
            second=first;
            first=arr[i];
        }
        else if (arr[i]>second)
        {
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third)
        {
            third=arr[i];
        }
    }   
    cout<<"Three largest elements of array is "<<first<<" , "<< second <<" , "<< third <<endl;
}

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    if (size<3)
    {
        cout<<"INVALID INPUT"<<endl;
        
    }
    
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    cout<<thirdLargest(num, size);
}