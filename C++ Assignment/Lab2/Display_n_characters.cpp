/*Write a program to accept a character, an integer n and display the next n characters.*/

#include<iostream>
using namespace std;

int main()
{
    char ch;
    int n;
    cout<<"Enter a character"<<endl;
    cin>>ch;

    cout<<"Enter nunber upto which you want to print next characters"<<endl;
    cin>>n;

    while(n!=0)
    {
        cout<<char(ch+1)<<endl;
        ch++;
        n--;
    }



    return 0;
}