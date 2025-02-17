#include<iostream>
#include<string>
using namespace std;

string space_remove(string str)
{
  string result = "";
    for (char c : str) {
        if (c != ' ') {
            result += c;
        }
    }
    return result;
  
}
int main()
{
    string str;
    cout<<"Enter the word: ";
    cin>>str;
    
    cout<<"Without the spaces : "<<space_remove(str)<<endl;
    return 0;
}