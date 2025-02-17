// #include<iostream>
// using namespace std;
// bool checkPalindrome(int n)
// {
//   int ans=0;
//   int temp=n;
//   while(temp != 0)
//   {
//     ans =(ans*10)+(temp%10);
//     temp=temp/10;
//   }
//   return (ans==n);
// }

// int main()
// {
//     int num;
//     cout<<"Enter the number: ";
//     cin>>num;
//     if (checkPalindrome(num)==1)
//     {
//         cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"No"<<endl;
//     }

//     return 0;
    

// }


#include<iostream>
using namespace std;
int reverse(int n)
{
    int rev=0,rem;
    while(n!=0)
    {
      rem=n%10;
      rev= rev*10 + rem;
      n /=10;  
    }
    return rev;
}
int main()
{
    int num,result;
    cout<<"Enter the number: ";
    cin>>num;
    result=reverse(num);
    if (result==num)
    {
        cout<<"Yes it is Palingdrome"<<endl;
    }
    return 0;
    
}