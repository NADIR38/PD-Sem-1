#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

const int maxsize = 100;
string username[maxsize] = {"ahad", "waleed", "nadir", "kamran", "usman"};
string password[maxsize] = {"123", "321", "789", "234", "678"};
string cars[maxsize];
float rates[maxsize];

string rentalHistory[maxsize];
int carCount = 0;
int historyCount = 0;
string name, pin, role;
int userCount = 5;

void printHeader();
bool login();
int adminMenu();
int userMenu();
string listOfCars();
bool addCars(string carname, float rate);
string deleteCars(int carNumber);
string updateCarNames(int carNumber, string newCarName);
string setRates();
float calculateTotalCost(int carNumber, int hours);
string showRentalHistory();
void sortCarsByRate();

void waitForUserInput();
bool isValidInteger(string input);
bool isValidFloat(string input);
int stringToInt(string input);
float stringToFloat(string input);
bool isValidUsername(string newUsername);
bool isValidPassword(string password);
bool addUser(string newUsername, string newPassword);
bool deleteUser(string usernameToDelete);
void showUsers();

int main()
{
    int option, carNumber, hours;
    string carname, newCarName, input;
    float rate;

    printHeader();

    while (true)
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter password: ";
        cin >> pin;

        if (login())
        {
            system("cls");
            if (role == "admin")
            {
                while (true)
                {
                    option = adminMenu();
                    if (option == 1)
                    {
                        system("cls");
                        cout << listOfCars() << endl;
                    }
                    else if (option == 2)
                    {
                        system("cls");
                        cout << "Enter car name: ";
                        cin >> carname;

                        cout << "Enter rate: ";
                        cin >> input;
                        if (!isValidFloat(input))
                        {
                            cout << "Invalid rate. Please enter a valid float number." << endl;
                            continue;
                        }
                        rate = stringToFloat(input);

                        if (addCars(carname, rate))
                            cout << "Car added successfully." << endl;
                        else
                            cout << "Car not added. Maximum limit reached." << endl;
                    }
                    else if (option == 3)
                    {
                        system("cls");
                        cout << "Enter car number to delete: ";
                        cin >> input;
                        if (!isValidInteger(input))
                        {
                            cout << "Invalid input. Please enter a valid integer." << endl;
                            continue;
                        }
                        carNumber = stringToInt(input);
                        cout << deleteCars(carNumber) << endl;
                    }
                    else if (option == 4)
                    {
                        system("cls");
                        cout << "Enter car number to update: ";
                        cin >> input;
                        if (!isValidInteger(input))
                        {
                            cout << "Invalid input. Please enter a valid integer." << endl;
                            continue;
                        }
                        carNumber = stringToInt(input);
                        cout << "Enter new car name: ";
                        cin >> newCarName;
                        cout << updateCarNames(carNumber, newCarName) << endl;
                    }
                    else if (option == 5)
                    {
                        system("cls");

                        string carNumberInput, rateInput;
                        int carNumber;
                        float newRate;

                        cout << "Enter the car number to set the rate: ";
                        cin >> carNumberInput;

                        if (!isValidInteger(carNumberInput))
                        {
                            cout << "Invalid input. Please enter a valid car number." << endl;
                            waitForUserInput();
                            continue;
                        }
                        carNumber = stringToInt(carNumberInput);

                        if (carNumber < 1 || carNumber > carCount)
                        {
                            cout << "Invalid car number. Please select a valid car number from the list." << endl;
                            waitForUserInput();
                            continue;
                        }

                        cout << "Enter the new rate for the car: ";
                        cin >> rateInput;

                        if (!isValidFloat(rateInput))
                        {
                            cout << "Invalid rate. Please enter a valid float number." << endl;
                            waitForUserInput();
                            continue;
                        }
                        newRate = stringToFloat(rateInput);

                        if (newRate <= 0)
                        {
                            cout << "Invalid rate. Please enter a positive value." << endl;
                            waitForUserInput();
                            continue;
                        }

                        rates[carNumber - 1] = newRate;
                        cout << "Rate updated successfully." << endl;
                        waitForUserInput();
                    }
                    else if (option == 6)
                    {
                        system("cls");
                        sortCarsByRate();
                        cout << "Cars sorted by rate." << endl;
                    }
                    else if (option == 7)
                    {
                        system("cls");
                        string newUsername, newPassword;
                        cout << "Enter new username: ";
                        cin >> newUsername;

                        if (!isValidUsername(newUsername))
                        {
                            if (!isValidPassword(newPassword))
                            {
                                cout << "Failed to add user. Enter a valid Username." << endl;
                                waitForUserInput();
                                continue;
                            }
                        }

                        cout << "Enter new password: ";
                        cin >> newPassword;

                        if (!isValidPassword(newPassword))
                        {
                            cout << "Failed to add user. Enter a valid Password." << endl;

                            continue;
                        }

                        if (addUser(newUsername, newPassword))
                        {
                            cout << "User added successfully." << endl;
                        }
                        else
                        {
                            cout << "Failed to add user. Please ensure username is unique and system is not at full capacity." << endl;
                        }

                        waitForUserInput();
                    }
                    else if (option == 8)
                    {
                        system("cls");
                        string usernameToDelete;
                        cout << "Enter username to delete: ";
                        cin >> usernameToDelete;
                        if (deleteUser(usernameToDelete))
                            cout << "User deleted successfully." << endl;
                        else
                            cout << "User not found." << endl;
                    }
                    else if (option == 9)
                    {
                        system("cls");
                        showUsers();
                    }
                    else if (option == 10)
                    {
                        cout << "Logging out..." << endl;
                        system("cls");
                        break;
                    }
                    else
                    {
                        cout << "Invalid option. Please try again." << endl;
                    }
                    waitForUserInput();
                    system("cls");
                }
            }
            else if (role == "user")
            {
                while (true)
                {
                    option = userMenu();
                    if (option == 1)
                    {
                        system("cls");
                        cout << listOfCars() << endl;
                    }
                    else if (option == 2)
                    {
                        system("cls");
                        cout << "Enter car number to rent: ";
                        cin >> input;
                        if (!isValidInteger(input))
                        {
                            cout << "Invalid input. Please enter a valid integer." << endl;
                            continue;
                        }
                        carNumber = stringToInt(input);

                        cout << "Enter number of hours: ";
                        cin >> input;
                        if (!isValidInteger(input))
                        {
                            cout << "Invalid input. Please enter a valid integer." << endl;
                            continue;
                        }
                        hours = stringToInt(input);

                        float totalCost = calculateTotalCost(carNumber, hours);
                        cout << "Total cost: Rs " << totalCost << endl;

                        rentalHistory[historyCount] = cars[carNumber - 1] + "\n";
                        historyCount++;
                    }
                    else if (option == 3)
                    {
                        system("cls");
                        cout << showRentalHistory() << endl;
                    }
                    else if (option == 4)
                    {
                        cout << "Logging out..." << endl;
                        system("cls");
                        break;
                    }
                    else
                    {
                        cout << "Invalid option. Please try again." << endl;
                    }
                    waitForUserInput();
                    system("cls");
                }
            }
        }
        else
        {
            system("cls");
            cout << "Invalid credentials. Please try again." << endl;
        }
    }
}

bool isValidInteger(string input)
{
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] < '0' || input[i] > '9')
        {
            return false;
        }
    }
    return true;
}

bool isValidFloat(string input)
{
    bool dotSeen = false;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == '.')
        {
            if (dotSeen)
                return false;
            dotSeen = true;
        }
        else if (input[i] < '0' || input[i] > '9')
        {
            return false;
        }
    }
    return true;
}

int stringToInt(string input)
{
    int result = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        result = result * 10 + (input[i] - '0');
    }
    return result;
}

float stringToFloat(string input)
{
    float result = 0, decimal = 0;
    bool isDecimal = false;
    float divisor = 10;

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == '.')
        {
            isDecimal = true;
        }
        else if (!isDecimal)
        {
            result = result * 10 + (input[i] - '0');
        }
        else
        {
            decimal = decimal + (input[i] - '0') / divisor;
            divisor = divisor * 10;
        }
    }

    return result + decimal;
}
void printHeader()
{
    cout << "===============================================================================" << endl;
    cout << "  RRRRR   EEEEE    N   N    TTTTT      AAAAA   CCCCC    AAAAA   RRRRR         " << endl;
    cout << "  R    R  E        NN  N      T       A     A  C       A     A  R    R        " << endl;
    cout << "  RRRRR   EEEE     N N N      T       AAAAAAA  C       AAAAAAA  RRRRR         " << endl;
    cout << "  R   R   E        N  NN      T       A     A  C       A     A  R   R         " << endl;
    cout << "  R    R  EEEEE    N   N      T       A     A  CCCCC   A     A  R    R        " << endl;
    cout << "===============================================================================" << endl;
    cout << "                         Welcome to RENT A CAR!                             " << endl;
    cout << "                    Where Convenience Meets the Road!                        " << endl;
    cout << "===============================================================================" << endl;
}





bool login()
{
    for (int i = 0; i < userCount; i++)
    {
        if (username[i] == name && password[i] == pin)
        {

            if (i < 3)
            {
                role = "admin";
            }
            else
            {
                role = "user";
            }
            return true;
        }
    }
    return false;
}

int adminMenu()
{
    string input;
    int option;

    while (true)
    {
        cout << "Admin Menu:" << endl;
        cout << "1. View Cars" << endl;
        cout << "2. Add Car" << endl;
        cout << "3. Delete Car" << endl;
        cout << "4. Update Car Name" << endl;
        cout << "5. Set Car Rates" << endl;
        cout << "6. Sort Cars By Rate" << endl;
        cout << "7. Add User" << endl;
        cout << "8. Delete User" << endl;
        cout << "9. Show Users" << endl;
        cout << "10. Logout" << endl;

        cout << "Select an option: " << endl;
        cin >> input;

        if (isValidInteger(input))
        {
            option = stringToInt(input);
            if (option >= 1 && option <= 10)
            {
                return option;
            }
        }

        system("cls");
    }
}
int userMenu()
{
    string input;
    int option;

    while (true)
    {
        cout << "User Menu:" << endl;
        cout << "1. View Cars" << endl;
        cout << "2. Rent Car" << endl;
        cout << "3. View Rental History " << endl;
        cout << "4. Logout" << endl;
        cout << "Select an option: ";
        cin >> input;

        if (isValidInteger(input))
        {
            option = stringToInt(input);
            if (option >= 1 && option <= 5)
            {
                return option;
            }
        }

        cout << "Invalid option. Please enter a number between 1 and 5." << endl;
    }
}
string listOfCars()
{
    if (carCount == 0)
    {
        return "No cars available for rent.";
    }
    string carList = "Cars available for rent:\n";
    for (int i = 0; i < carCount; i++)
    {
        carList += to_string(i + 1) + ". " + cars[i] + " - Rate: Rs " + to_string(rates[i]) + "\n";
    }
    return carList;
}
bool addCars(string carname, float rate)
{
    if (carCount < maxsize)
    {
        cars[carCount] = carname;
        rates[carCount] = rate;

        carCount++;
        return true;
    }
    return false;
}
string deleteCars(int carNumber)
{
    if (carNumber >= 1 && carNumber <= carCount)
    {
        for (int i = carNumber - 1; i < carCount - 1; i++)
        {
            cars[i] = cars[i + 1];
            rates[i] = rates[i + 1];
        }
        carCount--;
        return "Car deleted successfully.";
    }
    return "Invalid car number.";
}
string updateCarNames(int carNumber, string newCarName)
{
    if (carNumber >= 1 && carNumber <= carCount)
    {
        cars[carNumber - 1] = newCarName;
        return "Car name updated successfully.";
    }
    return "Invalid car number.";
}
string setRates()
{
    for (int i = 0; i < carCount; i++)
    {
        cout << "Enter new rate for car " << cars[i] << ": ";
        while (true)
        {
            cin >> rates[i];
            if (rates[i] > 0)
                break;
            else
                cout << "Rate must be positive. Please enter again: ";
        }
    }
    return "Rates updated successfully.";
}
bool addUser(string newUsername, string newPassword)
{
    if (userCount < maxsize && isValidUsername(newUsername) && isValidPassword(newPassword))
    {
        username[userCount] = newUsername;
        password[userCount] = newPassword;
        userCount++;
        return true;
    }
    return false;
}
void showUsers()
{
    if (userCount == 0)
    {
        cout << "No users registered." << endl;
        return;
    }
    cout << "List of users:" << endl;
    for (int i = 0; i < userCount; i++)
    {
        cout << i + 1 << ". " << username[i] << endl;
    }
}
bool deleteUser(string usernameToDelete)
{
    for (int i = 0; i < userCount; i++)
    {
        if (username[i] == usernameToDelete)
        {
            for (int j = i; j < userCount - 1; j++)
            {
                username[j] = username[j + 1];
                password[j] = password[j + 1];
            }
            userCount--;
            return true;
        }
    }
    return false;
}
string showRentalHistory()
{
    string history = "Rental History:\n";
    for (int i = 0; i < historyCount; i++)
    {
        history = history + rentalHistory[i];
    }
    return history;
}
void sortCarsByRate()
{
    for (int i = 0; i < carCount - 1; i++)
    {
        for (int j = i + 1; j < carCount; j++)
        {
            if (rates[i] > rates[j])
            {
                swap(cars[i], cars[j]);
                swap(rates[i], rates[j]);
            }
        }
    }
}

bool isValidUsername(string newUsername)
{

    int count = 0;
    while (newUsername[count] != '\0')
    {
        count++;
    }

    if (count < 3)
        return false;

    for (int i = 0; i < userCount; i++)
    {
        if (username[i] == newUsername)
            return false;
    }

    return true;
}
bool isValidPassword(string pin)
{
    for (int i = 0; i < pin.length(); i++)
    {
        char ch = pin[i];

        if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || (ch = ' ')))
        {
            return false;
        }
    }
    return true;
}
float calculateTotalCost(int carNumber, int hours)
{
    if (carNumber < 1 || carNumber > carCount || hours <= 0)
    {
        cout << "Invalid car number or hours." << endl;
        return 0;
    }
    return rates[carNumber - 1] * hours;
}
void waitForUserInput()
{
    cout << "Press any key to continue..." << endl;
    _getch();
}