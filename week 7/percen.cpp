#include<iostream>
using namespace std;
main()
{
int p1=0; 
int p2=0;
 int p3=0;
 int p4=0;
 int p5=0;
 int n;
 cout<<"enter total numbers..";
 cin>>n;
 int number;
 
 for(int i=1;i<=n;i++)
 {
    cout<<"enter a number..";
    cin>>number;
 
 if(number>=1 && number<=200)
 {p1++;}
 if(number>200 && number<=400)
 {p2++;}
if(number>400 && number<=600)
 {p3++;}
 if(number>600 && number<=800)
 {p4++;}
 if(number>800 && number<=1000)
 {p5++;}

}
cout<<(p1*100.0/n)<<endl;
cout<<(p2/n)*100<<endl;
cout<<(p3/n)*100<<endl;
cout<<(p4/n)*100<<endl;
cout<<(p5/n)*100<<endl;
}