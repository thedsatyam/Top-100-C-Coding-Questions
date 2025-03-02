#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start=0;
    int end =n-1;

    int mid= start + (end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]<key)
        {
            //Go on the right side of Mid
            start = mid+1;
        }
        else
        {
            //Go on the left side of Mid
           end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main()
{
    int even[6]={23, 4 ,5, 6, 55, 33};
    int odd[5]={3, 22, 45, 89,11};

    int oddindex = binarySearch(odd, 5, 45);
    int evenindex = binarySearch(even, 6, 55);

    cout<<"Index of 55 is "<<evenindex<<endl;
    cout<<"Index of 45 is "<<oddindex<<endl;
}