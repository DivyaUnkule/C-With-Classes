/*Create a class ComplexNumber with data members real, imaginary. 
Create Default and Parameterized constructors. 
Write getters and setters for all the data members. Also add the display function. 
Create the object of this class in main method and invoke all the methods in that class.*/

#include<iostream>
using namespace std;
class ComplexNumber{
    private:
    int real;
    int imag;

    public:
    ComplexNumber()
    {
        this->real=0;
        this->imag=0;
    }
    ComplexNumber(int real,int imag)
    {
        this->real=real;
        this->imag=imag;
    }
    void setReal(int real)
    {
        this->real=real;
    }

    int getReal()
    {
        return this->real;
    }

    void setImag(int imag)
    {
        this->imag=imag;
    }

    int getImag()
    {
        return this->imag;
    }

    void displayComplex()
    {
        cout<<real<<" + "<<imag<<"j "<<endl;
    }

};
int main()
{
    int real;
    int imag;
    ComplexNumber c1(23,50);
    c1.displayComplex();

    ComplexNumber c2;
    cout<<"Enter Real Number: "<<endl;
    cin>>real;
    c2.setReal(real);
    
    cout<<"Enter Imag Number: "<<endl;
    cin>>imag;
    c2.setImag(imag);

    c2.displayComplex();




    return 0;
}