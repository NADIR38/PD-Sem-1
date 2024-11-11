#include <iostream>
using namespace std;
int time(string color[], int num);

main()
{
    int num;
  
    cout << "Enter the number of squares you want to fill:";
    cin >> num;
      string color[num];
    for (int x = 0; x < num; x++)
    {
        cout << "Enter the color:";
        cin >> color[x];
    }
    cout << "Time required: " << time(color, num) << " seconds";
}
int time(string color[], int num)
{
    int total;
    int count=0;
    for (int x = 0; x < num; x++)
    {
        if (color[x] == color[x + 1])
            continue;
        else
            count++;
    }
    total =( (2 * num) + count)-1;
    return total;
}