#include <iostream>
using namespace std;
bool isMalus(int);
float averageMalus(int,int);

int power(int x, int y)
{
    int result = 1;
    for (int i = 1; i <= y; i++)
        result *= x;


    return result;
}

int main()
{
    int startingPoint, endingPoint;
    cout << "Enter Starting Number: ";
    cin >> startingPoint;
    cout << "Enter Ending Number: ";
    cin >> endingPoint;

    cout << "Average : " <<averageMalus(startingPoint,endingPoint);
    
}

float averageMalus(int startingPoint, int endingPoint){
    int count = 0;
    float sum = 0;
    for(int i = startingPoint; i <= endingPoint ; i++){
        if(isMalus(i)){
            count++;
            sum += i;
        }
    }

    return sum/count;
}

bool isMalus(int num)
{
    int digit = 0, sum = 0;
    int originalNum = num; // Store the original number
    int n = num;
    int digitsCount = 1;

    /* Checking how many digits a number has */
    while (n >= 10)
    {
        digitsCount++;
        n /= 10;
    }

    // Calculate the sum of each digit raised to the power of its position
    for (int i = digitsCount; i >= 1; i--)
    {
        digit = originalNum % 10; // Use originalNum here
        originalNum /= 10;        // Reduce originalNum
        sum += power(digit, i);
    }
  

    if(sum == num)
        return true;

    return false;
}