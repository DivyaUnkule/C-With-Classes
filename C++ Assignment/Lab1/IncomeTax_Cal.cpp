/*Write a program, which accepts annual basic salary of an employee and calculates and displays the 
Income tax as per the following rules. 
Basic: < 1, 50,000 Tax = 0
 1, 50,000 to 3,00,000 Tax = 20% 
 > 3,00,000 Tax = 30% */
 
#include<iostream>
using namespace std;

 int main()
 {
    double sal;

    cout<<"Enter your Salary: "<<endl;
    cin>>sal;
    
    if(sal<150000)
    {
        cout<<"Tax: 0"<<endl;
    }
    else if(150000<=sal<=300000)
    {
        cout<<"Tax: "<<((20*sal)/100)<<endl;
    }
    else if(sal>300000)
    {
        cout<<"Tax: "<<((30*sal)/100)<<endl;
    }

    return 0;
 }