//  Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include<iostream>
using namespace std;

int main(void)
{
float ang1,ang2,ang3,total;
cout<<"Enter first angle of triangle"<<endl;
cin>>ang1;

cout<<"Enter second angle of triangle"<<endl;
cin>>ang2;

cout<<"Enter third angle of triangle"<<endl;
cin>>ang3;

total=ang1+ang2+ang3;

if(total==180.0f)
{
    cout<<"Triangle is valid";
}

else{
    cout<<"Triangle is not valid";
}
    return 0;
}