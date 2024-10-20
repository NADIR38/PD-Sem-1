#include <iostream>
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
string car1, car2, car3;
float rate1, rate2, rate3; 
int carCount = 0;
int option, options;

int main() {
    printHeader();
    printLogin();
    return 0;
}

void printHeader() {
                                 cout << "********************************" << endl;
                                 cout << "******** Smart Rental Car*******" << endl;
                                 cout << "********************************" << endl;
   
}

void printLogin() {
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == "user" && password == "123") {
        userMenu();
    } else if (username == "admin" && password == "321") {
        adminMenu();
    } else {
        cout << "Invalid username or password. Please try again." << endl;
        printLogin(); 
    }
}

void adminMenu() {
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
    cout << "Available cars: " << endl;
    if (carCount == 0) {
        cout << "No cars available." << endl; 
    } else {
        if (carCount >= 1) cout << "- " << car1 << " (Rate: RS" << rate1 << "/hour)" << endl;
        if (carCount >= 2) cout << "- " << car2 << " (Rate: RS" << rate2 << "/hour)" << endl;
        if (carCount >= 3) cout << "- " << car3 << " (Rate: RS" << rate3 << "/hour)" << endl;
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
    if (carCount >= 3) {
        cout << "Cannot add more cars. Maximum limit of 3 reached." << endl;
        adminMenu();
        return;
    }

    string carName;
    cout << "Enter car name: ";
    cin >> carName;
    
    
    if (carCount == 0) {
        car1 = carName;
        rate1 = 0; 
    } else if (carCount == 1) {
        car2 = carName;
        rate2 = 0; 
    } else if (carCount == 2) {
        car3 = carName;
        rate3 = 0; 
    }

    carCount++; 
    cout << "Car added successfully!" << endl;
    adminMenu(); 
}

void deleteCars() {
    cout << "Enter the number of the car to delete (1-3): ";
    int carNumber;
    cin >> carNumber;

    if (carNumber < 1 || carNumber > 3) {
        cout << "Invalid selection. Please choose 1, 2, or 3." << endl;
        deleteCars(); 
        return;
    }

    
    if (carNumber == 1) {
        car1="";
        rate1 = 0; 
        cout << "Car 1 deleted successfully!" << endl;
    } else if (carNumber == 2) {
        car2="";
        rate2 = 0; 
        cout << "Car 2 deleted successfully!" << endl;
    } else if (carNumber == 3) {
        car3="";
        rate3 = 0; 
        cout << "Car 3 deleted successfully!" << endl;
    }

    carCount--; 
    adminMenu(); 
}

void updateCarNames() {
    cout << "Enter the number of the car to update (1-3): ";
    int carNumber;
    cin >> carNumber;

    if (carNumber < 1 || carNumber > 3) {
        cout << "Invalid selection. Please choose 1, 2, or 3." << endl;
        updateCarNames(); 
        return;
    }

    string newCarName;
    cout << "Enter new car name: ";
    cin >> newCarName;

    if (carNumber == 1) {
        car1 = newCarName;
        cout << "Car 1 updated successfully!" << endl;
    } else if (carNumber == 2) {
        car2 = newCarName;
        cout << "Car 2 updated successfully!" << endl;
    } else if (carNumber == 3) {
        car3 = newCarName;
        cout << "Car 3 updated successfully!" << endl;
    }

    adminMenu(); 
}

void setRates() {
    cout << "Set rates for the cars: " << endl;

    if (carCount >= 1) {
        cout << "Enter rate for " << car1 << ": ";
        cin >> rate1;
    }
    if (carCount >= 2) {
        cout << "Enter rate for " << car2 << ": ";
        cin >> rate2;
    }
    if (carCount >= 3) {
        cout << "Enter rate for " << car3 << ": ";
        cin >> rate3;
    }

    cout << "Rates updated successfully!" << endl;
    adminMenu(); 
}

void calculateTotalCost() {
    cout << "Select a car to rent (1-3): ";
    int carNumber;
    cin >> carNumber;

    if (carNumber < 1 || carNumber > 3 || (carNumber == 1 && car1.empty()) || (carNumber == 2 && car2.empty()) || (carNumber == 3 && car3.empty())) {
        cout << "Invalid selection. Please choose a valid car." << endl;
        calculateTotalCost(); 
        return;
    }

    int hours;
    cout << "Enter number of hours: ";
    cin >> hours;

    float totalCost = 0;
    if (carNumber == 1) totalCost = rate1 * hours;
    else if (carNumber == 2) totalCost = rate2 * hours;
    else if (carNumber == 3) totalCost = rate3 * hours;

    cout << "Total cost for renting " << (carNumber == 1 ? car1 : carNumber == 2 ? car2 : car3) << " for " << hours << " hours: Rs" << totalCost << endl;
    userMenu(); 
}
