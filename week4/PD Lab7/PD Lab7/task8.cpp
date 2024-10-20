#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int num;
    float bus,truck,train,total,weight,busPer,truckPer,trainPer,price,avg;   
    cout << "Enter the count of cargo for transportation: ";
    cin  >> num;
    for (int x=1;x<=num;x++)
    {
        cout << "Enter the tonnage of cargo " << x << ": ";
        cin  >> weight;
        if(weight<=3)
        {
            bus = bus + weight;
            price = price + (weight*200);
        }
        if(weight <= 11)
        {
            truck = truck + weight;
            price = price + (weight*175);
        }
        if(weight>11)
        {
            train = train + weight;
            price = price + (weight*120);
        }
    }
    total = bus + train + truck;
    avg = price /total;
    bus= (bus*100)/total;
    truck = (truck*100)/total;
    train = (train*100)/total;
    cout << fixed << setprecision(2);
    cout << avg <<endl;
    cout << bus << "%"<<endl;
    cout << truck <<"%"<<endl;
    cout << train <<"%"<<endl;
}