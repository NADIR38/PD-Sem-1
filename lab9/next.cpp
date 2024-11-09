#include<iostream>
using namespace std;
#include<string>
void shiftletters(char str[])
{
    for(int i=0; str[i]!='\0';i++)
    {
          if(str[i]>='a'&&str[i]<='z')
       {if (str[i]=='z')
        {str[i]='a';}
        else
        {str[i]++;}
    }
    
}
}
main()
{
   char word[100];
    cout<<"enter word";
    cin>>word;
   
  shiftletters(word);
  cout<<word;

    

}