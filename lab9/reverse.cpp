#include<iostream>
using namespace std;
int checkposition(char word[],int lenght)
{
 int count;
 for(int i=0;i<lenght;i++)
 {
  if  (isalpha(word[i]))
count++;

 }  
 return count; 
}
void reverse(int count,char word[])
{
for(int j=0;j<count/2;j++)  
{
  char temp=word[j];
    word[j]=word[count-j-1];
    word[count-j-1]=temp;
}

}
main()
{
char word[100];
cout<<"enter word..";
cin>>word;
 int lenght=0;
  while(word[lenght]!='\0')
  lenght++;
 int count= checkposition(word,lenght);
  reverse(count,word);
cout<<"reverse order is.."<<word<<endl;

}