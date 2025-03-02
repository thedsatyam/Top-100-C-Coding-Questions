// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin>> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[i]>arr[j])
//             {
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             } 
//         }
//     }
//     cout<<"Sorted array are "; 

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" , "; 
//     }
//     return 0;   
// }


#include<iostream>
using namespace std;

void sortArray(int arr[], int n)
{
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }  
        }    
    }
    cout<<"Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" , ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin>>num[i];
    }
    sortArray(num, n);
}

