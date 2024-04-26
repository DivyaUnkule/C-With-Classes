#include<bits/stdc++.h>
using namespace std;

class Person {
private:
    char* name;
    int age;
    char* city;

public:
   
    Person() {
        name = new char[1];
        *name = '\0';
        age = 0;
        city = new char[1];
        *city = '\0';
    }

    
    Person(const char* name, int age, const char* city) {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->age = age;
        this->city = new char[strlen(city) + 1];
        strcpy(this->city, city);
    }
    ~Person() {
        delete[] name;
        delete[] city;
    }

    const char* getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    const char* getCity() const {
        return city;
    }

    void setName(const char* name) {
        delete[] this->name;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    void setAge(int age) {
        this->age = age;
    }

    void setCity(const char* city) {
        delete[] this->city;
        this->city = new char[strlen(city) + 1];
        strcpy(this->city, city);
    }

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "City: " << city << endl;
    }
};

int main() {
    Person p1("John", 30, "New York");
    p1.displayInfo();

    int choice;
    do {
        cout << "Enter your choice\n1. Set Name\n2. Get Name\n3. Set Age\n4. Get Age\n5. Set City\n6. Get City\n7. Display Info\n8. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                char name[100];
                cout << "Enter your name: ";
                cin >> name;
                p1.setName(name);
                break;
            }

            case 2: {
                cout << "Name: " << p1.getName() << endl;
                break;
            }

            case 3: {
                int age;
                cout << "Enter your age: ";
                cin >> age;
                p1.setAge(age);
                break;
            }

            case 4: {
                cout << "Age: " << p1.getAge() << endl;
                break;
            }

            case 5: {
                char city[100];
                cout << "Enter your city: ";
                cin >> city;
                p1.setCity(city);
                break;
            }

            case 6: {
                cout << "City: " << p1.getCity() << endl;
                break;
            }

            case 7: {
                p1.displayInfo();
                break;
            }

            case 8: {
                cout << "Exiting..." << endl;
                break;
            }

            default: {
                cout << "Invalid choice. Please enter a number between 1 and 8." << endl;
                break;
            }
        }
    } while (choice != 8);

    return 0;
}
