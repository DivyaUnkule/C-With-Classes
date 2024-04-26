/*Accept a lowercase character from the user and check whether the character is a vowel or consonant.*/

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter lowercase character: "<<endl;
    cin>>ch;

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"charcter is vowel"<<endl;
    }
    else
    {
        cout<<"Character is consonent"<<endl;
    }

    return 0;
}