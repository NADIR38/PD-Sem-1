#include<iostream>
using namespace std;
int count(string word,char letter);
main()
{
    int n;
    cout<<"enter no of letters ..";
    cin>>n;
    string word[n];
for(int i=0;i<n;i++)
{
    cout<<"word.."<<endl;
    cin>>word[i];
}
    char letter;
    cin>>letter;
    int counts;
    for(int j=0;j<n;j++)
    {
        counts+=count(word[j],letter);
    }
    cout<<count;
}
int count(string word,char letter)
{
    int counts;
    int i;
while(word[i]!='\0')
{
    word[i]==letter;
    counts++;
}
return counts;

}