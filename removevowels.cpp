#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the word: ";
    cin>>str;
    int j =0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' &&
            str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' )
        {
            str[j++]= str[i];
        }
        
    }
    while (j < str.size())
    {
        str[j] = '\0';
        j++;
    }

    cout<<"String with vowels is "<< str <<endl;
    return 0;
}