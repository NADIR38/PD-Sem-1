#include <iostream>
#include <string>
using namespace std;

const int maxsize = 100;
string username[maxsize] = {"ahad", "waleed", "nadir", "kamran", "usman"};
string password[maxsize] = {"123", "321", "789", "234", "678"};
string cars[maxsize];
float rates[maxsize];
float ratings[maxsize] = {0}; // Car ratings
int ratingCount[maxsize] = {0}; // Count of ratings per car
string printlogin();
int carCount = 0;
string rentalHistory[maxsize];
int historyCount = 0;

void printHeader();
bool login();
int adminMenu();

int userMenu();
string listofCars();
bool addCars(string carname);
string deleteCars(int carNumber);
string updateCarNames(int carNumber, string newCarName);
string setRates();
float calculateTotalCost(int carNumber, int hours);
string searchCar(string keyword);
string showRentalHistory();
void sortCarsByRate();
void rateCar(int carNumber, float userRating);
float getAverageRating(int carNumber);
string intToString(int num);
void waitForUserInput();
bool isValidInteger(string input);
bool isValidFloat(string input);
int convertToInt(string input);
float convertToFloat(string input);

 string name, pin,role;

int main() {
  
    int option, carNumber, hours;
    string carname, newCarName, message, keyword;

    printHeader();
    printlogin();


    bool isLoggedIn = login();

    if (isLoggedIn) {
        if (role == "admin") {
            while (true) {
                option = adminMenu();
                if (option == 1) {
                    message = listofCars();
                    cout << message << endl;
                }
                else if (option == 2) {
                    cout << "Enter car name: ";
                    cin >> carname;
                    bool added = addCars(carname);
                    if (added) cout << "Car added successfully." << endl;
                    else cout << "Car not added. Maximum limit reached." << endl;
                }
                else if (option == 3) {
                    cout << "Enter car number to delete (1-" << carCount << "): ";
                    string carNumberInput;
                    while (true) {
                        cin >> carNumberInput;
                        if (isValidInteger(carNumberInput)) {
                            carNumber = convertToInt(carNumberInput);
                            if (carNumber >= 1 && carNumber <= carCount) {
                                break;
                            }
                        }
                        cout << "Invalid input. Please enter a valid car number (1-" << carCount << "): ";
                    }
                    message = deleteCars(carNumber);
                    cout << message << endl;
                }
                else if (option == 4) {
                    cout << "Enter car number to update (1-" << carCount << "): ";
                    string carNumberInput;
                    while (true) {
                        cin >> carNumberInput;
                        if (isValidInteger(carNumberInput)) {
                            carNumber = convertToInt(carNumberInput);
                            if (carNumber >= 1 && carNumber <= carCount) {
                                break;
                            }
                        }
                        cout << "Invalid input. Please enter a valid car number (1-" << carCount << "): ";
                    }
                    cout << "Enter new car name: ";
                    cin >> newCarName;
                    message = updateCarNames(carNumber, newCarName);
                    cout << message << endl;
                }
                else if (option == 5) {
                    message = setRates();
                    cout << message << endl;
                }
                else if (option == 6) {
                    sortCarsByRate();
                    cout << "Cars sorted by rate." << endl;
                }
                else if (option == 7) {
                    cout << "Logging out...\n";
                    printlogin();
                }
                else {
                    cout << "Invalid option. Please try again." << endl;
                }
            }
        }
        else if (role == "user") {
            while (true) {
                option = userMenu();
                if (option == 1) {
                    message = listofCars();
                    cout << message << endl;
                }
                else if (option == 2) {
                    cout << "Enter car number to rent (1-" << carCount << "): ";
                    string carNumberInput;
                    while (true) {
                        cin >> carNumberInput;
                        if (isValidInteger(carNumberInput)) {
                            carNumber = convertToInt(carNumberInput);
                            if (carNumber >= 1 && carNumber <= carCount) {
                                break;
                            }
                        }
                        cout << "Invalid input. Please enter a valid car number (1-" << carCount << "): ";
                    }
                    cout << "Enter number of hours: ";
                    string hoursInput;
                    while (true) {
                        cin >> hoursInput;
                        if (isValidInteger(hoursInput)) {
                            hours = convertToInt(hoursInput);
                            if (hours > 0) {
                                break;
                            }
                        }
                        cout << "Invalid input. Please enter a valid number of hours: ";
                    }
                    float totalCost = calculateTotalCost(carNumber, hours);
                    cout << "Total cost: Rs " << totalCost << endl;

                    rentalHistory[historyCount] = cars[carNumber - 1];
                    historyCount++;
                }
                else if (option == 3) {
                    message = showRentalHistory();
                    cout << message << endl;
                }
                else if (option == 4) {
                    cout << "Enter car number to rate (1-" << carCount << "): ";
                    string carNumberInput;
                    while (true) {
                        cin >> carNumberInput;
                        if (isValidInteger(carNumberInput)) {
                            carNumber = convertToInt(carNumberInput);
                            if (carNumber >= 1 && carNumber <= carCount) {
                                break;
                            }
                        }
                        cout << "Invalid input. Please enter a valid car number (1-" << carCount << "): ";
                    }
                    float rating;
                    cout << "Enter your rating (1-5): ";
                    string ratingInput;
                    while (true) {
                        cin >> ratingInput;
                        if (isValidFloat(ratingInput)) {
                            rating = convertToFloat(ratingInput);
                            if (rating >= 1 && rating <= 5) {
                                break;
                            }
                        }
                        cout << "Invalid input. Please enter a valid rating (1-5): ";
                    }
                    rateCar(carNumber, rating);
                    cout << "Rating added." << endl;
                }
                else if (option == 5) {
                    cout << "Logging out...\n";
                    break;
                }
                else {
                    cout << "Invalid option. Please try again." << endl;
                }
            }
        }
    }
    else {
        cout << "Login failed. Invalid username or password.\n";
    }

    return 0;
}

void printHeader() {
    cout << "********************************" << endl;
    cout << "****** Welcome to Smart Rent *****" << endl;
    cout << "********************************" << endl;
}
string printlogin()
{
  cout<<"enter name..";
  cin>>name;
  cout<<"enter password..";
  cin>>pin;  
  
    cout << "Enter role (admin/user): ";
    cin >> role;
    return role;
    
}
bool login() {
    for (int i = 0; i < maxsize; i++) {
        if (username[i] == name && password[i] == pin) {
            return true;
        }
    }
    return false;
}

int adminMenu() {
    int option;
    cout << "\nAdmin Menu:" << endl;
    cout << "1. List of cars" << endl;
    cout << "2. Add cars" << endl;
    cout << "3. Delete cars" << endl;
    cout << "4. Update car names" << endl;
    cout << "5. Set rates" << endl;
    cout << "6. Sort cars by rate" << endl;
    cout << "7. Log out" << endl;
    cout << "Enter option: ";
    cin >> option;
    return option;
}

int userMenu() {
    int option;
    cout << "\nUser Menu:" << endl;
    cout << "1. View available cars" << endl;
    cout << "2. Calculate total cost" << endl;
    cout << "3. Show rental history" << endl;
    cout << "4. Rate a car" << endl;
    cout << "5. Log out" << endl;
    cout << "Enter option: ";
    cin >> option;
    return option;
}

string intToString(int num) {
    string result = "";
    bool isNegative = false;

    if (num == 0) return "0";

    if (num < 0) {
        isNegative = true;
        num = -num;
    }

    while (num > 0) {
        result = char('0' + num % 10) + result;
        num /= 10;
    }

    if (isNegative) result = "-" + result;

    return result;
}

bool isValidInteger(string input) {
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] < '0' || input[i] > '9') {
            return false;
        }
    }
    return true;
}

bool isValidFloat(string input) {
    bool hasDecimalPoint = false;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '.') {
            if (hasDecimalPoint) {
                return false;
            }
            hasDecimalPoint = true;
        } else if (input[i] < '0' || input[i] > '9') {
            return false;
        }
    }
    return true;
}

int convertToInt(string input) {
    int result = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        result = result * 10 + (input[i] - '0');
    }
    return result;
}

float convertToFloat(string input) {
    float result = 0;
    float decimalPlace = 1;
    bool isDecimalPoint = false;

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '.') {
            isDecimalPoint = true;
            continue;
        }
        if (!isDecimalPoint) {
            result = result * 10 + (input[i] - '0');
        } else {
            decimalPlace *= 10;
            result += (input[i] - '0') / decimalPlace;
        }
    }

    return result;
}

string listofCars() {
    if (carCount == 0) {
        return "No cars available.";
    }
    string output = "Available cars:\n";
    for (int i = 0; i < carCount; i++) {
        output += intToString(i + 1) + ". " + cars[i] + " (Rate: Rs " + intToString((int)rates[i]) + " per hour)\n";
    }
    return output;
}

bool addCars(string carname) {
    if (carCount < maxsize) {
        cars[carCount] = carname;
        rates[carCount] = 0;
        carCount++;
        return true;
    }
    return false;
}

string deleteCars(int carNumber) {
    if (carNumber < 1 || carNumber > carCount) {
        return "Invalid car number.";
    }

    for (int i = carNumber - 1; i < carCount - 1; i++) {
        cars[i] = cars[i + 1];
        rates[i] = rates[i + 1];
    }
    carCount--;
    return "Car deleted successfully.";
}

string updateCarNames(int carNumber, string newCarName) {
    if (carNumber < 1 || carNumber > carCount) {
        return "Invalid car number.";
    }
    cars[carNumber - 1] = newCarName;
    return "Car name updated successfully.";
}

string setRates() {
    for (int i = 0; i < carCount; i++) {
        cout << "Enter rate for " << cars[i] << ": ";
        string rateInput;
        while (true) {
            cin >> rateInput;
            if (isValidFloat(rateInput)) {
                rates[i] = convertToFloat(rateInput);
                break;
            }
            cout << "Invalid input. Please enter a valid rate: ";
        }
    }
    return "Rates updated successfully.";
}

float calculateTotalCost(int carNumber, int hours) {
    if (carNumber < 1 || carNumber > carCount) {
        cout << "Invalid car selection." << endl;
        return 0;
    }
    return rates[carNumber - 1] * hours;
}

string showRentalHistory() {
    if (historyCount == 0) {
        return "No rental history available.";
    }
    string output = "Rental History:\n";
    for (int i = 0; i < historyCount; i++) {
        output += intToString(i + 1) + ". " + rentalHistory[i] + "\n";
    }
    return output;
}

void sortCarsByRate() {
    for (int i = 0; i < carCount - 1; i++) {
        for (int j = 0; j < carCount - i - 1; j++) {
            if (rates[j] > rates[j + 1]) {
                swap(rates[j], rates[j + 1]);
                swap(cars[j], cars[j + 1]);
            }
        }
    }
}

void rateCar(int carNumber, float userRating) {
    if (carNumber < 1 || carNumber > carCount || userRating < 1 || userRating > 5) {
        cout << "Invalid input." << endl;
        return;
    }
    int idx = carNumber - 1;
    ratings[idx] += userRating;
    ratingCount[idx]++;
}
