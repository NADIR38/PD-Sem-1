#include <iostream>
using namespace std;
bool check(string ele[]);

main()

    {
        string ele[4];
    cout<<"ENter 4 elements"<<endl;
for(int x=0;x<4;x++)
{
    cout<<"Enetr the string: ";
    cin>>ele[x];cout<<endl;
}
 if (check(ele)==1)
    {
        cout << "Identical" << endl;
    } else {
        cout << "NOt Idetical." << endl;


    }}
bool check(string ele[])
{
    {
        if (ele[0]==ele[1] && ele[1]==ele[2]&& ele[2]==ele[3])
        return true;
    
    }
    return false;
 
}