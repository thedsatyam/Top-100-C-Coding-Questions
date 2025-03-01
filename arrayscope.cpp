#include<iostream>
using namespace std;

void update(int arr[], int n)
{
    cout<<"Inside the function "<<endl;

    //updating the array's first element
    arr[0]=90;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" " ;
    }
    cout<<endl;
    cout<<"Going back to main function "<<endl;
}
int main()
{
    int size;
    cin>>size;
    int  arr[100];
    update(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
