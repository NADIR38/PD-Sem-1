#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void printLogin();
void userMenu();
void printHeader();
void adminMenu();
void listofCars();
void addCars();
void deleteCars();
void updateCarNames();
void setRates();
void calculateTotalCost();

string username, password;
const int maxCars = 15; 
string cars[maxCars];   
float rates[maxCars];   
int carCount = 0;      
int option, options;

int main() {
    printHeader();
    printLogin();
    return 0;
}

void printHeader() {
    system("cls");
    cout << "********************************" << endl;
    cout << "******** Smart Rental Car*******" << endl;
    cout << "********************************" << endl;
}

void printLogin() {
    system("cls");
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == "user" && password == "123") {
        userMenu();
    } 
    else if (username == "admin" && password == "321") {
        adminMenu();
    }  
    else {
        cout << "Invalid username or password. Please try again." << endl;
        printLogin(); 
    }
}

void adminMenu() {
    system("cls");
    cout << "1. List of cars" << endl;
    cout << "2. Add cars" << endl;
    cout << "3. Delete cars" << endl;
    cout << "4. Update car names" << endl;
    cout << "5. Set rates" << endl;
    cout << "6. Log out" << endl;
    cout << "Enter option: ";
    cin >> option;

    if (option == 1) {
        listofCars();
    } else if (option == 2) {
        addCars();
    } else if (option == 3) {
        deleteCars();
    } else if (option == 4) {
        updateCarNames();
    } else if (option == 5) {
        setRates();
    } else if (option == 6) {
        printLogin();
    } else {
        cout << "Invalid option. Please try again." << endl;
        adminMenu();
    }
}

void userMenu() {
    system("cls");
    cout << "1. List cars" << endl;
    cout << "2. Calculate total cost" << endl;
    cout << "3. Log out" << endl;
    cout << "Enter option: ";
    cin >> options;

    if (options == 1) {
        listofCars();
    } else if (options == 2) {
        calculateTotalCost();
    } else if (options == 3) {
        printLogin();
    } else {
        cout << "Invalid option. Please try again." << endl;
        userMenu();
    }
}

void listofCars() {
    system("cls");
    cout << "Available cars: " << endl;
    if (carCount == 0) {
        cout << "No cars available." << endl; 
    } else {
        for (int i = 0; i < carCount; i++) {
            cout << "- " << cars[i] << " (Rate: RS" << rates[i] << "/hour)" << endl;
        }
    }
    cout << "Press 1 to return to admin menu or 2 to return to user menu: ";
    int returnOption;
    cin >> returnOption;
    if (returnOption == 1) {
        adminMenu();
    } else {
        userMenu();
    }
    
}

void addCars() {
    system("cls");
    if (carCount >= maxCars) {
        cout << "Cannot add more cars. Maximum limit reached." << endl;
        adminMenu();
        return;
    }

    cout << "Enter car name: ";
    cin >> cars[carCount];
    rates[carCount] = 0; 
    carCount++;
    cout << "Car added successfully!" << endl;
    adminMenu(); 
}

void deleteCars() {
    system("cls");
    if (carCount == 0) {
        cout << "No cars to delete." << endl;
        adminMenu();
        return;
    }

    cout << "Enter the number of the car to delete (1-" << carCount << "): ";
    int carNumber;
    cin >> carNumber;

    if (carNumber < 1 || carNumber > carCount) {
        cout << "Invalid selection. Please choose a valid car number." << endl;
        deleteCars(); 
        return;
    }

    for (int i = carNumber - 1; i < carCount - 1; i++) {
        cars[i] = cars[i + 1];
        rates[i] = rates[i + 1];
    }
    carCount--;
    cout << "Car deleted successfully!" << endl;
    adminMenu(); 
}

void updateCarNames() {
    system("cls");
    cout << "Enter the number of the car to update (1-" << carCount << "): ";
    int carNumber;
    cin >> carNumber;

    if (carNumber < 1 || carNumber > carCount) {
        cout << "Invalid selection." << endl;
        updateCarNames(); 
        return;
    }

    cout << "Enter new car name: ";
    cin >> cars[carNumber - 1];
    cout << "Car updated successfully!" << endl;
    adminMenu();
}

void setRates() {
    system("cls");
    for (int i = 0; i < carCount; i++) {
        cout << "Enter rate for " << cars[i] << ": ";
        cin >> rates[i];
    }

    cout << "Rates updated successfully!" << endl;
    adminMenu(); 
}

void calculateTotalCost() {
    system("cls");
    if (carCount == 0) {
        cout << "No cars available for rent." << endl;
        userMenu();
        return;
    }

    cout << "Select a car to rent (1-" << carCount << "): ";
    int carNumber;
    cin >> carNumber;

    if (carNumber < 1 || carNumber > carCount) 
    {
        cout << "Invalid selection. Please choose a valid car." << endl;
        calculateTotalCost(); 
        return;
    }

    int hours;
    cout << "Enter number of hours: ";
    cin >> hours;

    float totalCost = rates[carNumber - 1] * hours;
    cout << "Total cost for renting " << cars[carNumber - 1] << " for " << hours << " hours: Rs" << totalCost << endl;
    userMenu(); 
}
