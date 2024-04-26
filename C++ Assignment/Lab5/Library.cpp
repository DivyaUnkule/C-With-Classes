/*Library Catalog with Books and Journals:
Problem Statement: Build a library catalog system .
Create a base class LibraryItem with properties like title and author. 
Then, derive classes like Book and Journal, each with their unique properties. 
Implement methods to check out and return items in the derived classes.
*/




#include<iostream>
using namespace std;

class LibraryItem{

    string title ;
    string author ; 
public:
    LibraryItem( string title="abc" ,string author ="xyz" ){
    this->title = title ;
    this->author=author;
    }
    

    virtual void display(){
        cout<<"Title of Book :"<<title<<endl;
        cout<<"Author of Book:"<<author<<endl;

    }
};




class Book : public LibraryItem{

  int price ;
  int bookId ;
 public:
  Book(string title , string author , int price , int bookId):LibraryItem( title ,author){
     this->bookId=bookId;
     this->price=price;
  }

  void display(){
        LibraryItem::display();
        cout<<"Book Id :"<<bookId<<endl;
        cout<<"price :"<<price<<endl;

    }
};

class Journal : public LibraryItem{

  int edition ;
 int  price ;
public:
  Journal(string title  , string author , int price , int edition):LibraryItem( title ,author){
     this->edition=edition;
     this->price=price;
  }
 
  void display(){
        LibraryItem::display();
        cout<<"edition is  :"<<edition<<endl;
        cout<<"price :"<<price<<endl;

    }
};
int main ()
{
     Book b ("Concept of Physics","HC Verma",800,121);
        b.display();
    Journal j ("Antarang" , "Anant Sharma", 500,10)  ;
        j.display();
    cout<<"------------------------------------"<<endl;
       int choice;
       string title;
       string author;
       int price;
       int bookId;
       int edition;
       int i=0;
       LibraryItem*lb[5];
       int count=0;
      do{
        cout<<"Enter your choice: \n1.Book\n2.Journal\n3.exit"<<endl;
       cin >> choice;
           switch(choice)
           {
            case 1:
            cout<<"enter title "<<endl;
            fflush(stdin);
            getline(cin,title);

           cout<<"enter author "<<endl;
           fflush(stdin);
            getline(cin,author);

           cout<<"enter price "<<endl;
           cin>>price;

           cout<<"enter bookId "<<endl;
           cin>>bookId;

          lb[i++]=new Book(title,author,price,bookId);
          
          break;

          case 2:
            cout<<"enter title "<<endl;
            fflush(stdin);
            getline(cin,title);

            cout<<"enter author "<<endl;
            fflush(stdin);
            getline(cin,author);

           cout<<"enter price "<<endl;
           cin>>price;

           cout<<"enter edition "<<endl;
           cin>>edition;

          lb[i++]=new Journal(title,author,price,edition);
          
          break;
          }
      }while (choice!=3); 
              
      
       for(int i=0;i<3;i++)
       {
        lb[i]->display();
       }



    return  0 ;
}