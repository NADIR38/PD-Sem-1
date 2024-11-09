#include<iostream>
using namespace std;
main()
{
  char input[100];
  char result[100];
  int j=0;
  cout<<"enter word";
  cin>>input;
  for(int i=0;input[i]!='\0';i++)
  {
  if (
    input[i] != 'a' && input[i] != 'e' && input[i] != 'i' &&
            input[i] != 'o' && input[i] != 'u' &&
            input[i] != 'A' && input[i] != 'E' && input[i] != 'I' &&
            input[i] != 'O' && input[i] != 'U'
            )  
           { result[j++]=input[i];}
  }
  result[j]='\0';
            cout<<result;
}