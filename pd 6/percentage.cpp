#include <iostream>
using namespace std;
 float aver(float biomarks,float mathmarks,float ssmarks,float engmarks,float chemmarks);
string status(float percentage);
float percentage;
main()
{
    string name;
    cout<<"name";
    cin>>name;
float mathmarks;
cout<<"enter math marks..";
cin>>mathmarks;
float engmarks;
cout<<"enter english marks..";
cin>>engmarks;
float ssmarks;
cout<<"enter social science marks..";
cin>>ssmarks;
float chemmarks;
cout<<"enter chem marks..";
cin>>chemmarks;
float biomarks;
cout<<"enter biology marks..";
cin>>biomarks;
cout<<"percentage is.."<<aver(biomarks, mathmarks, ssmarks,engmarks,chemmarks);
cout<<"grade is"<<status(percentage);
}
float aver(float biomarks,float mathmarks,float ssmarks,float engmarks,float chemmarks)
{
float average=(biomarks+mathmarks+ssmarks+engmarks+chemmarks)/500;

 float percentage=average*100;


return percentage;



}
string status(float percentage)
{
   
string grade;    
if(percentage<=40)
{
grade="F" ;   
}
else if(percentage>40 && percentage<=50)
{
grade="D"  ;  
}
else if(percentage>50 && percentage<=60)
{
grade="C";    
}
else if(percentage>60 && percentage<=70)
{
grade="B";   
}
else if(percentage>70 && percentage<=80)
{
grade="B+" ;   
}
else if(percentage>80 &&percentage<=90)
{
grade="A" ;  
}
else if(percentage>90 && percentage<=100)
{
grade="A+" ;   
}
return grade;
}