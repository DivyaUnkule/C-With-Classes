/*Write a menu driven program to do following operations :
a) Compute area of circle
b) Compute area of rectangle
c) Compute area of triangle
d) Exit
Display menu, ask choice to the user, depending on choice accept the parameters and perform the 
operation. Continue this process until user selects exit option.*/

#include<iostream>
using namespace std;
int main(void)
{
    int choice;
    

    for(;1;)
    {
        cout<<"Enter the choice from following:\n1) Compute area of circle\n2) Compute area of rectangle\n3) Compute area of triangle\n0) Exit \n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                float r;
                cout<<"Enter radius of circle\n";
                cin>>r;

                cout<<"Area of circle:"<<(3.14*r*r)<<endl;
                continue;
            }
             case 2:
            {
                float l,w;
                cout<<"Enter length of rectangle\n";
                cin>>l;

                cout<<"Enter width of rectangle\n";
                cin>>w;

                cout<<"Area of rectangle:"<<(l*w)<<endl;
                continue;
            }
             case 3:
            {
               float b,h;
                cout<<"Enter breadth of triangle\n";
                cin>>b;

                cout<<"Enter height of triangle\n";
                cin>>h;

                cout<<"Area of triangle: "<<((b*h)/2)<<endl;
                continue;
            }
             case 0:
            {
                return 0;
            }

        }
    }
    return 0;
}