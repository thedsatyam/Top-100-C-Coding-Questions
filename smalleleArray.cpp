#include<iostream>
using namespace std;
 int smallestElement(int arr[], int n)
 {
    int mini=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini=min(mini, arr[i]);
    }
    return mini;
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
    cout<<"Smallest Element of the Array is "<<smallestElement(num, size);    
 }