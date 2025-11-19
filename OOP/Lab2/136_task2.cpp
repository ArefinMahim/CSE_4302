#include<iostream>

using namespace std;

enum etype
{
    laborer,
    secretary,
    manager,
    accountant,
    executive,
    researcher
};
int main()
{
    char c;
    etype employe;

    cout<<"Enter employee type (first letter only): ";
    cin>>c;

    switch(c)
    {
        case 'l':
            employe=laborer;
            break;

        case 's':
            employe=secretary;
            break;

        case 'm':
            employe=manager;
            break;

        case 'a':
            employe=accountant;
            break;

        case 'e':
            employe=executive;
            break;

        case 'r':
            employe=researcher;
            break;

        default:
            cout<<"Invalid character";
            break;
    }


    switch(employe)
    {
    case laborer:
        cout<<"Employee type is laborer";
        break;

    case secretary:
        cout<<"Employee type is secretary";
        break;

    case manager:
        cout<<"Employee type is manager";
        break;

    case accountant:
        cout<<"Employee type is accountant";
        break;

    case executive:
        cout<<"Employee type is executive";
        break;

    case researcher:
        cout<<"Employee type is researcher";
        break;

    default:

        cout<<"\nInvalid employee type";
        break;
    }



    return 0;
}
