#include<iostream>

using namespace std;

int main()
{
    int n, height=0;
    cout<<"Enter maximum height: ";
    cin>>n;

    for(int i=1; i<=3; i++)
    {
        height+=n;

        n/=2;

        cout<<"Height after hour "<<i<<": "<<height<<"\n";
    }

    return 0;
}

