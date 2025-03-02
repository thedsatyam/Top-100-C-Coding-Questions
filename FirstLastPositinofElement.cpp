#include<iostream>
using namespace std;

int lastOccurence(int arr[], int n, int key)
{
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid = start + (end-start)/2;
    while (start<end)
    {
        if (arr[mid]==key)
        {
            ans = mid;
            start= mid+1;
        }
        else if (arr[mid]<key)
        {
            start = mid + 1;
        }
        else if(arr[mid]<key)
        {
            end= mid -1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int firstOccurence(int arr[], int n, int key)
{
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid = start + (end-start)/2;
    while (start<end)
    {
        if (arr[mid]==key)
        {
            ans = mid;
            end = mid-1;
        }
        else if (arr[mid]<key)
        {
            start = mid + 1;
        }
        else if(arr[mid]<key)
        {
            end= mid -1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main()
{
    int odd[12]={1,2,3,3,3,3,3,3,3,3,3,5};
    cout<<"First ocuurence of 3 is at index  "<<firstOccurence(odd,12, 3)<<endl;
    cout<<"Last occurence of 3 is at index "<<lastOccurence(odd, 12, 3)<<endl;
}