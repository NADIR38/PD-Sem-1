#include <iostream>
using namespace std;
int total(string movie);
main()
{
    cout<<"Enter the movie name (Gladiator,StarWarts,Terminator,TakingLives,TombRider):";
    string movie ;
    cin>>movie;
 cout<<"Total price is: "<<total( movie);
}
int total(string movie)
{
    string movielist[5]={"Gladiator","StarWarts","Terminator","TakingLives","TombRider"};
    int price;
    for(int x=0;x<5;x++)
    {
        if((movielist[x]== movie) && x%2==0)
        {
            price=500*.90;
        }
        else if ((movielist[x]== movie) && x % 2 != 0)
        {
            price =500*.95;
        }
    }
    

return price;
}