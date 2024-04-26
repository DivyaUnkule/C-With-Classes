/*Create cpp application for bank account handling.
2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
Add  constr. (2 constrs : first to accept all details )

2.2 Add Business logic methods
Methods
public void withdraw(double amt) 
public void deposit(double amt)

2.3: Create object of account class and test withdraw and deposit methods.*/

#include<iostream>
using namespace std;

class BankAccount{
    private:
    int accNo;
    string Name;
    double balance;

    public:
    BankAccount()
    {
    accNo=0;;
    Name="\0";
    balance=0;
    }

    BankAccount(int accNo,string Name,double balance)
    {
    this->accNo=accNo;
    this->Name=Name;
    this->balance=balance;
    }
    double getBalance()
    {
        return balance;
    }

    void withdraw(double amt) 
    {
       balance=balance-amt;
    }
    void deposit(double amt)
    {
       balance=balance+amt;
    }
    void displayBalance()
    {
        cout<<"Total Balance: "<<balance<<endl;
    }


};

int main()
{
    int accNo;string Name;double balance;
    double amt1;
    cout<<"Enter youe account number"<<endl;
    cin>>accNo;
    cout<<"Enter youe Name"<<endl;
    cin>>Name;
    cout<<"Enter your balance"<<endl;
    cin>>balance;
    BankAccount BA2(accNo,Name,balance);

    int choice;
    

    do{
        cout<<"Enter your choice: \n1.withdraw money\n2.deposit Money\n3.displayBalance\n4.exit"<<endl;
    cin>>choice;
        switch(choice)
        {
        case 1:
        
        cout<<"Enter Amount to withdraw"<<endl;
        cin>>amt1;
       
        if(amt1>BA2.getBalance())
        {
          cout<<"You have insufficient balance "<<BA2.getBalance()<<" please try again later"<<endl;
        }
        else
        {
          BA2.withdraw(amt1);
        }
        break;

        case 2:
        
        cout<<"Enter Amount to deposit"<<endl;
        cin>>amt1;
        BA2.deposit(amt1);
        
        break;

        case 3:
        
        BA2.displayBalance();
        
        break;
       }



    }while(choice!=4);

    return 0;
}