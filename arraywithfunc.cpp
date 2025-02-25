#include<iostream>
using namespace std;

void printarray(int arr[], int size)
{
    cout<<"Print the array ";
    for (int i = 0; i <=size; i++)
    {
        cout<<arr[i]<<" ";
    }   
}

int main()
{
    int first[15]={2,5};
    printarray(first,14);
    cout<<endl;

    int second[10]={0};
    printarray(second,10);
    cout<<endl;

    int third[20]={1};
    printarray(third,20);
}