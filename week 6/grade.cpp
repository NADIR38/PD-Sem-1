#include <iostream>
using namespace std;
string status(int marks);
main()
{
int marks;
cout<<"enter marks..";
cin>>marks;
cout<<"the grade is.."<<status(marks);

}
string status(int marks)
{
string grade;    
if(marks<=50)
{
grade="F" ;   
}
if(marks>50 && marks<=60)
{
grade="E"  ;  
}
if(marks>60 && marks<=70)
{
grade="D";    
}
if(marks>70 && marks<=80)
{
grade="C";   
}
if(marks>81 && marks<=85)
{
grade="B" ;   
}
if(marks>85)
{
grade="A" ;  
}
return grade;
}
