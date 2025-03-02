#include<iostream>
using namespace std;

void SmallElement(int arr[], int n)
{
    int first,second,third;
    first=second=third=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<first)
        {
            third=second;
            second=first;
            first=arr[i];
        }
        else if (arr[i]<second)
        {
            third=second;
            second=arr[i];
        }
        else if(arr[i]<third)
        {
            third=arr[i];
        }        
    }
    cout<<"Three Smallest elements are "<<first<<" , "<<second<<" , "<<third<<endl;
}

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    SmallElement(num,size);
    
}