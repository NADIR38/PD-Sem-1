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
void viewRentalHistory();
void displayInvalidInputMessage();
bool isValidOption(int option, int maxOption);
bool isValidCarNumber(int carNumber, int maxCarCount);
bool isValidHours(int hours);

string username, password;
const int maxCars = 15;
string cars[maxCars];
float rates[maxCars];
int carCount = 0;
int option, options;

struct RentalRecord {
    string carName;
    int hoursRented;
    float totalCost;
};

const int maxRentalHistory = 100;
RentalRecord rentalHistory[maxRentalHistory];
int rentalHistoryCount = 0;

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
    system("cls");
    cout << "1. List of cars" << endl;
    cout << "2. Add cars" << endl;
    cout << "3. Delete cars" << endl;
    cout << "4. Update car names" << endl;
    cout << "5. Set rates" << endl;
    cout << "6. View rental history" << endl;
    cout << "7. Log out" << endl;
    cout << "Enter option: ";
    while (true) {
        if (cin >> option && isValidOption(option, 7)) {
            break;
        } else {
            displayInvalidInputMessage();
            cin.clear(); // clear the error flag
            cin.ignore(10000, '\n'); // discard invalid input
        }
    }

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
        viewRentalHistory();
    } else if (option == 7) {
        printLogin();
    }
}

void userMenu() {
    system("cls");
    cout << "1. List cars" << endl;
    cout << "2. Calculate total cost" << endl;
    cout << "3. View rental history" << endl;
    cout << "4. Log out" << endl;
    cout << "Enter option: ";
    while (true) {
        if (cin >> options && isValidOption(options, 4)) {
            break;
        } else {
            displayInvalidInputMessage();
            cin.clear(); // clear the error flag
            cin.ignore(10000, '\n'); // discard invalid input
        }
    }

    if (options == 1) {
        listofCars();
    } else if (options == 2) {
        calculateTotalCost();
    } else if (options == 3) {
        viewRentalHistory();
    } else if (options == 4) {
        printLogin();
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
    while (true) {
        if (cin >> returnOption && (returnOption == 1 || returnOption == 2)) {
            break;
        } else {
            displayInvalidInputMessage();
            cin.clear(); // clear the error flag
            cin.ignore(10000, '\n'); // discard invalid input
        }
    }

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
    while (true) {
        if (cin >> carNumber && isValidCarNumber(carNumber, carCount)) {
            break;
        } else {
            displayInvalidInputMessage();
            cin.clear();
            cin.ignore(10000, '\n');
        }
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
    while (true) {
        if (cin >> carNumber && isValidCarNumber(carNumber, carCount)) {
            break;
        } else {
            displayInvalidInputMessage();
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    cout << "Enter new car name: ";
    cin >> cars[carNumber - 1];
    cout << "Car updated successfully!" << endl;
    adminMenu();
}

void setRates() {
    system("cls");
    for (int i = 0; i < carCount; i++) {
        float rate;
        cout << "Enter rate for " << cars[i] << ": ";
        while (true) {
            if (cin >> rate && rate >= 0) {
                break;
            } else {
                displayInvalidInputMessage();
                cin.clear();
                cin.ignore(10000, '\n');
            }
        }
        rates[i] = rate;
    }

    cout << "Rates updated successfully!" << endl;
    adminMenu();
}

void calculateTotalCost() {
    if (carCount == 0) {
        cout << "No cars available for rent." << endl;
        userMenu();
        return;
    }

    cout << "Select a car to rent (1-" << carCount << "): ";
    int carNumber;
    while (true) {
        if (cin >> carNumber && isValidCarNumber(carNumber, carCount)) {
            break;
        } else {
            displayInvalidInputMessage();
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    int hours;
    cout << "Enter number of hours: ";
    while (true) {
        if (cin >> hours && isValidHours(hours)) {
            break;
     
    }

    float totalCost = rates[carNumber - 1] * hours;
    cout << "Total cost for renting " << cars[carNumber - 1] << " for " << hours << " hours: Rs" << totalCost << endl;
    userMenu();
}

void viewRentalHistory() {
    system("cls");
    cout << "Rental History: " << endl;
    if (rentalHistoryCount == 0) {
        cout << "No rentals found." << endl;
    } else {
        for (int i = 0; i < rentalHistoryCount; i++) {
            cout << rentalHistory[i].carName << " | Hours: " << rentalHistory[i].hoursRented << " | Total Cost: Rs" << rentalHistory[i].totalCost << endl;
        }
    }
    cout << "Press 1 to return to admin menu or 2 to return to user menu: ";
    int returnOption;
    while (true) {
        if (cin >> returnOption && (returnOption == 1 || returnOption == 2)) {
            break;
        } else {
            displayInvalidInputMessage();
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    if (returnOption == 1) {
        adminMenu();
    } else {
        userMenu();
    }
}

void displayInvalidInputMessage() {
    cout << "Invalid input, please try again." << endl;
}

bool isValidOption(int option, int maxOption) {
    return option > 0 && option <= maxOption;
}

bool isValidCarNumber(int carNumber, int maxCarCount) {
    return carNumber > 0 && carNumber <= maxCarCount;
}

bool isValidHours(int hours) {
    return hours > 0;
}
