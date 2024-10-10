#include <iostream>
using namespace std;
string checktitle(int age,string gender);
string title;
main()
{
int age;
cout<<"enter age..";
cin>>age;
string gender;
cout<<"enter gender..";
cin>>gender;
cout<<"the title is.."<<checktitle(age,gender);
if(title=="master")
{
 cout<<"-boy";   
}
if(title=="Mr")
{
 cout<<"-man";   
}
if(title=="Miss")
{
 cout<<"-girl";   
}
if(title=="Ms")
{
 cout<<"-woman";   
}


}
string checktitle(int age,string gender)
{
if(age<16 && gender =="m")
{
    title="master";
}
if(age>=16 && gender =="m")
{
    title="Mr";
}
if(age<16 && gender =="f")
{
    title="Miss";
}
if(age>=16 && gender =="f")
{
    title="Ms";
}
return title;

}
