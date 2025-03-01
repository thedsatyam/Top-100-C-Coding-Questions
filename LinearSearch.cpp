#include<iostream>
using namespace std;

bool Search(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==element)
        {
            return 1;
        }  
    }
    return 0;    
}

int main()
{
    cout<<"Enter the size of array: ";
    int size;
    cin>>size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element to search for "<<endl;
    int key;
    cin>>key;
    
    bool found = Search(arr,100,key);
    if (found)
    {
        cout<<"Key is present "<<endl;
    }
    else
    {
        cout<<"Key is not present "<<endl;
    }
    return 0;
}