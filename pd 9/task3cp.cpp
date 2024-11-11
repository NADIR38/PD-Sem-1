#include <iostream>
using namespace std;
string size (string sen);
main()
{
    cout<<"Enter the string: ";
    string sen;
    cin>>sen;
    cout<<size(sen);

}
string size (string sen)
{
    string out;
    if (sen.length()%2==0)
    out="True";
    else if (sen.length()!=0)
    out="False";
return out;
}