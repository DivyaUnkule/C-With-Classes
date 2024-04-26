
// Accept a single digit from the user and display it in words. For example, if digit entered is 9, display Nine.

#include<iostream>
using namespace std;

int main(void)
{
    int digit;
    cout<<"Enter any sigle digit"<<endl;
    cin>>digit;

    switch(digit)
    {
        case 1:
        
            cout<<"digit entered: "<<digit<<" - One"<<endl;
            break;
        
        case 2:
            cout<<"digit entered: "<<digit<<" - Two"<<endl;
            break;

        case 3:
           cout<<"digit entered: "<<digit<<" - Three"<<endl;
            break;

        case 4:
            cout<<"digit entered: "<<digit<<" - Four"<<endl;
             break;

        case 5:
            cout<<"digit entered: "<<digit<<" - Five"<<endl;
             break;

        case 6:
            cout<<"digit entered: "<<digit<<" - Six"<<endl;
             break;

        case 7:
            cout<<"digit entered: "<<digit<<" - Seven"<<endl;
             break;

        case 8:
           cout<<"digit entered: "<<digit<<" - Eight"<<endl;
            break;

        case 9:
            cout<<"digit entered: "<<digit<<" - Nine"<<endl;
            break;

        default:
            cout<<"digit entered: "<<digit<<" - which is not single digit number"<<endl;
    }

    return 0;
}