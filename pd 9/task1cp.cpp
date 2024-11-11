#include <iostream>
using namespace std;
int total(string fruitin, int quan);
main()
{
    cout<<"Enter the required fruit (peach, apple , guava , watermelon):";
    string fruitin ;
    cin>>fruitin;
    cout<<"Enter the quantity of fruit:";
    int quan;
    cin>>quan;
   cout<<"Total price is : " <<total(fruitin,quan);
}
int total(string fruitin, int quan)
{
    int totaly;
    int price[4]={60,70,40,30};
    string fruit[4]={"peach","apple","guava","watermelon"};
    for(int x=0;x<4;x++)
    {
        if(fruit[x]==fruitin)
         totaly = quan *price[x];
    }
return totaly;
}