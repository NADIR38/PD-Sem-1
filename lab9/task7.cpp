#include<iostream>
using namespace std;
main()
{
    char word1[100];
    cout<<"enter word 1..";
    cin>>word1;
     char word2[100];
    cout<<"enter word 2..";
    cin>>word2;
    char common[100];
    int index=0;
    for(int i=0;word1[i]!='\0';i++)
    {
        for(int j=0;word2[j]!='0';j++)
        if(word1[i]==word2[j])
        {
            common[index++]=word1[i];
            break;
        }
    }

        common[index]='\0';
        cout<<common;

    }

