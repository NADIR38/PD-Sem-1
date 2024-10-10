#include <iostream>
#include <string>
using namespace std;
string passorfail(int marks);
int main()
{
int score;
cout<<"enter score";
cin>>score;
cout<< passorfail(score);
return 0;


}
string passorfail(int marks)
{
string result;
if(marks > 50)
{
result="you are passed with" + to_string(marks) + "marks";
}
if(marks <50)
{
result="you are failed with" + to_string(marks) + "marks";
}
return result;
}