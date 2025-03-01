#include<iostream>
using namespace std;

void occurence(int arr[], int n)
{
    //Mark all elements as not visited
    vector<bool> visited(n,false);

    for (int i = 0; i < n; i++)
    {
        //Skip this element if processed
        if(visited[i]==true)
        {
            continue;
        }

        //count frequency
        int count=1;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                visited[j]=true;
                count++;
            }  
        }
        cout<< arr[i] << " "<< count << endl;   
    }   
}

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int num[size];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    occurence(num,size);
    
    
}