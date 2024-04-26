/*Write a program, which accepts two integers and an operator as a character (+ - * / ), performs the 
corresponding operation and displays the result.*/

#include<iostream>
using namespace std;

int main(void)

{
    int num1,num2;
    char opr;

   
    cout<<"Enter any two numbers"<<endl;
    cin>>num1>>num2;

    cout<<"Any operation which you want to perform, enter the operator for that"<<endl;
    fflush(stdin);
    cin>>opr;

    switch(opr)
    {
        case '+':
            cout<<num1 <<opr<< num2<< "= "<<(num1+num2);
            break;

        case '-':
           cout<<num1 <<opr<< num2<< "= "<<(num1-num2);
            break;

        case '*':
            cout<<num1 <<opr<< num2<< "= "<<(num1*num2);
            break;

        case '/':
           cout<<num1 <<opr<< num2<< "= "<<(num1/num2);
            break;
    }
    return 0;
}