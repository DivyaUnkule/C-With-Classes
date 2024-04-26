//19:Create menu driven program for Pizza Shop.And display total amount
#include <iostream>
using namespace std;

int displayMenu() {
    cout << "Welcome to Our Pizza Shop!" << endl;
    cout << "1. Margherita Pizza - 100/- " << endl;
    cout << "2. Pepperoni Pizza - 150/-" << endl;
    cout << "3. Vegetarian Pizza - 90/-" << endl;
    cout << "4. Hawaiian Pizza - 250/-" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice (1-5): ";
    int choice;
    cin >> choice;
    return choice;
}

double calculateTotal(int choice) {
    double price;
    switch(choice) {
        case 1:
            price = 100;
            break;
        case 2:
            price = 150;
            break;
        case 3:
            price = 90;
            break;
        case 4:
            price = 250;
            break;
        default:
            price = 0; 
    }
    return price;
}

int main() {
    double total = 0;
    int choice;
    
    do {
        choice = displayMenu();
        
        if(choice >= 1 && choice <= 4) {
            total += calculateTotal(choice);
            cout << "Added to your cart!" << endl;
        } else if(choice != 5) {
            cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
        }
        
    } while(choice != 5);
    
    cout << "Your total amount is: " << total <<" rs"<< endl;
    
    cout << "Thank you for visiting our Pizza Shop!" << endl;
    
    return 0;
}
