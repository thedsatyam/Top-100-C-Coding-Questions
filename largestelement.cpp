#include<iostream>
using namespace std;
 int largElement(int arr[], int n)
 {
    int maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi=max(maxi, arr[i]);
    }
    return maxi;
 }

 int main()
 {
    int size;
    int num[100];
    cout<<"Enter the size of array: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
     cout<<"Largest Element of  the array is  "<<largElement(num, size)<<endl;
 }