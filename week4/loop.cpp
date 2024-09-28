#include <iostream>
using namespace std;
void add(int,int);
main()
{
int n1,n2;
while(true)
{
cout<<"n1 is ..";
cin>>n1;
cout<< "n2 is..";
cin>>n2;
add(n1,n2);
}

}
void add(int n1,int n2)
{
int add;
add =n1+n2;
cout<<"sum is"<<add<<endl;
}