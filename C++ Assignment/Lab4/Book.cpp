/*Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
data members. Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that class. */

#include<iostream>
using namespace std;

class Book{
    private:
    string bname;
    int id;
    string author;
    double price;

    public:
    Book()
    {
    bname="xyz";
    id=0;
    author="abc";
    price=0.00; 
    }

    Book(string bname,int id,string author,double price)
    {
    this->bname=bname;
    this->id=id;
    this->author=author;
    this->price=price; 
    }

    void displayInfo()
    {
        cout<<"Book Name: "<<bname<<endl;
        cout<<"Book ID: "<<id<<endl;
        cout<<"Book Author: "<<author<<endl;
        cout<<"Book Price: "<<price<<endl;

    }

    void setBname(string bname)
    {
        this->bname=bname;
    }

    string getBname()
    {
        return this->bname;
    }

    void setId(int id)
    {
        this->id=id;
    }

    int getId()
    {
        return this->id;
    }

    void setAuthor(string author)
    {
        this->author=author;
    }

    string getAuthor()
    {
        return this->author;
    }

    void setPrice(double price)
    {
        this->price=price;
    }

    double getPrice()
    {
        return this->price;
    }
};
int main()
{
    string bname;
    int id;
    string author;
    double price;

    Book b1("Reasoning",123,"S Chand",780);
    b1.displayInfo();

    Book b2;

    cout<<"Enter Book Name: "<<endl;
    getline(cin, bname);
   
    
    b2.setBname(bname);
    cout<<"Book Name: "<<b2.getBname()<<endl;
   

    cout<<"Enter Book Id: "<<endl;
    cin>>id;
    b2.setId(id);
    cout<<"Book Id: "<<b2.getId()<<endl;


    cout<<"Enter Book Author Name: "<<endl;
    //getline();
    fflush(stdin);
    getline(cin, author);
    b2.setAuthor(author);
    cout << "Book Author Name: " << b2.getAuthor() << endl;
    cout<<"Enter Book Price: "<<endl;
    cin>>price;
    b2.setPrice(price);
    cout<<"Book Price: "<<b2.getPrice()<<endl;

    b2.displayInfo();

    return 0;
}