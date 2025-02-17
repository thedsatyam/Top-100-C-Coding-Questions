#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the word: "<<endl;
    cin>>str;
    int vowel=0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'||
          str[i]=='u'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'||
           str[i]=='O'|| str[i]=='U')
        {
            vowel++;
        }
        
    }
    cout<<"The number of vowels in the string are : "<<vowel<< endl;
    return 0;
}