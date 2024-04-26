#include<iostream>
using namespace std;
class Exception{

    public:
    string message;
    Exception(string error){
        message = error;
    }
};
class Stack
{
    private:
    int arr[4];
    int top;

    public:
    Stack()
    {
        top = -1;
    }

    void push(int n)
    {
        
        if(top<3)
        {
        arr[++top]=n;
        }

        else
        {
            throw new Exception("stack is full");
        }

    }

    void print()
    {
        for(int i=0;i<4;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    int pop()
    {
        if(top != -1)
        {
           return arr[top--];
        }
        else
        {
           throw new Exception("stack is empty");
        }
    }

};
int main()
{
    Stack s;
    int ch;
    int num;
   

    do{
        cout<<"Enter your choice:\n 1.Push\n2.Pop\n3.display Stack\n4.Exit "<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1:
            try{
            cout<<"Enter Num: "<<endl;
            cin>>num;

            s.push(num);
            
            }
            catch(Exception *obj)
           {
           cout<<obj->message<<endl;
           }
        break;
            case 2:
            try{
            cout<<"Popped element: "<<s.pop()<<endl;
            }
            catch(Exception *obj)
            {
             cout<<obj->message<<endl;
            }
       break;

            case 3:
            s.print();
            break;
        }
    }while(ch!=4);
   
    return 0;
}