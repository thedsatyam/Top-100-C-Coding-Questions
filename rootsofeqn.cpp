#include<iostream>
using namespace std;
int main()
{
    int a,b,c,root1,root2,discriminant,realPart,imgPart;
    cout<<"Enter the numbers: ";
    cin>>a>>b>>c;

    discriminant=( b*b - 4*a*c);
    if (discriminant>0)
    {
        root1 =(-b + sqrt(discriminant))/2*a ;
        root2 =(-b - sqrt(discriminant))/2*a ;
        cout<<"Roots are real and different."<<endl;
        cout<<"Root1 = "<<root1<<endl;
        cout<<"Root2 = "<<root2<<endl;
    }
     else if (discriminant==0)
    {
        root1 = (-b /2 * a) ;
        root2 =(-b /2 * a) ;
        cout<<"Roots are real and same."<<endl;
        cout<<"Root1 = "<<root1<<endl;
        cout<<"Root2 = "<<root2<<endl;
    }
    else
    {
      realPart=(-b)/2*a;
      imgPart= sqrt(-discriminant)/2 * a;
      cout<<"Roots are complex and different."<<endl;
      cout<<"Root1 = " <<realPart<< "+"<< imgPart << "i" <<endl;
      cout<<"Root2 = " <<realPart<< "+"<< imgPart << "i" <<endl;
    }
    return 0; 
}