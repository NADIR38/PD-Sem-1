#include <iostream>
using namespace std;
void transformer(int arr[], int trans);
main()
{
    int array[3];
    for (int x = 0; x < 3; x++)
    {
        cout << "Enter the number: ";
        cin >> array[x];
    }
    cout << "Enter the required number of transformation: ";
    int trans;
    cin >> trans;
    transformer(array, trans);
    cout << "Transformed array: ";
    for (int x = 0; x < 3; x++)
    {
        cout << array[x] << " ";
    }
}
void transformer(int arr[], int trans)
{
    int count = 0;
    while (count < trans)
    {
        for (int x = 0; x < 3; x++)
        {

            {
                if (arr[x] % 2 == 0)
                {
                    arr[x] = arr[x] + 2;
                }
                else if (arr[x] % 2 != 0)
                {
                    arr[x] = arr[x] - 2;
                }
                count++;
            }
        }
    }
}
