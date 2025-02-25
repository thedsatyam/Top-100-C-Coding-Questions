#include<iostream>
using namespace std;
int main()
{
    //declare
    int number[15];
    
    //accessing an array
    cout<<"Value at index 14 is "<<number[14]<<endl;

    //cout<<"Value at index 14 is "<<number[14]<<endl;

    //initialising an array
    int second[3]={5,7,11};

    //accesing an element
    cout<<"Value at 2 index is "<<second[2]<<endl;
    cout<<"Value at 1 index is "<<second[1]<<endl;
    cout<<"Value at 0 index is "<<second[0]<<endl;

    int third[15]={2,7};
    int n =15;
    for (int i = 0; i <n; i++)
    {
        cout<<third[i]<<" ";
    }
    cout<<endl;
    int fourth[10]={0};
     n =10;
    for (int i = 0; i <n; i++)
    {
        cout<<fourth[i]<<" ";
    }
    
    //initialising all locations with 1(not possible with the below line)
    cout<<endl;
    int fifth[5]={1};
    n =15;
    for (int i = 0; i <n; i++)
    {
        cout<<fifth[i]<<" ";
    }
    
    



}