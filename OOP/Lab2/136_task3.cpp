#include<iostream>

using namespace std;

struct fraction
{
    int numerator, denominator;
};

int main()
{

    fraction f1,f2, sum;

    char c,d;

    cout<<"First fraction: ";
    cin>>f1.numerator>>c>>f1.denominator;

    if(c!='/')
    {
        cout<<"Invalid";
        return 0;
    }

    cout<<"Second fraction: ";
    cin>>f2.numerator>>c>>f2.denominator;

    if(c!='/')
    {
        cout<<"Invalid";
        return 0;
    }

    if(f1.denominator==0 || f2.denominator==0) cout<<"Invalid operation";

    else
    {
        sum.numerator= (f1.numerator*f2.denominator+ f1.denominator*f2.numerator);
        sum.denominator=f1.denominator*f2.denominator;


        cout<<"Sum: "<<sum.numerator<<c<<sum.denominator;

    }

    return 0;
}
