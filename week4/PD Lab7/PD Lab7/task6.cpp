
#include<iostream>
using namespace std;
int primorial(int number);
bool isPrime(int number);
main()
{
    int num;
    cout << "Enter Number: ";
    cin  >> num;
    cout << primorial(num);
}

int primorial(int number)
{
    int result = 1,count = 0,i=2;
    while(true)
    {
        if(isPrime(i))
        {
            result = result * i;
            count = count + 1;
        }
        if(count >= number)
            break;
        i=i+1;
    }
    return result;
}
bool isPrime(int number)
{
    bool result = true;
    for(int i=2; i<number;i++)
    {
        if(number%i == 0)
            result = false;
    }
    return result;
}