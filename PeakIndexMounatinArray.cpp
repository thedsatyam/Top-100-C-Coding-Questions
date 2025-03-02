#include<iostream>
#include<vector>
using namespace std;

int mountain(vector<int>  &arr)
{
    int n=arr.size();
    int start=0;
    int end=n-1;
    int mid= start + (end-start)/2;
    while(start<end)
    {
        if (arr[mid]<arr[mid+1])
        {
            start= mid+1;
        }
        else 
        {
            end= mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main()
{
   vector<int> arr={1,2,7,5,4};
   cout<<mountain(arr);
   return 0;
}
