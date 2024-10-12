#include<iostream>
using namespace std;
string tellsign(string month,int date);
main()
{
string month;
cout<<"enter month..";
cin>>month;
int date;
cout<<"enter date..";
cin>>date;
cout<<"your sign is.."<< tellsign( month ,date);

}
string tellsign(string month,int date)
{
    string sign;
if((date>=21&&month=="march")||((date>=1||date<=19)&& month=="april"))
{
  sign="Aries";  
}
else if((date>=20&&month=="april")||((date>=1||date<=20)&& month=="may"))
{
  sign="Taurus";  
}
else if((date>=21&&month=="may")||((date>=1||date<=20)&& month=="june"))
{
  sign="Gemini";  
}
else if((date>=21&&month=="june")||((date>=1||date<=22)&& month=="july"))
{
  sign="cancer";  
}
else if((date>=23&&month=="july")||((date>=1||date<=22)&& month=="august"))
{
  sign="Leo";  
}
else if((date>=23&&month=="august")||((date>=1||date<=22)&& month=="september"))
{
  sign="virgo";  
}
else if((date>=23&&month=="september")||((date>=1||date<=22)&& month=="october"))
{
  sign="Libra";  
}
else if((date>=23&&month=="october")||((date>=1||date<=21)&& month=="november"))
{
  sign="scorpio";  
}
else if((date>=22&&month=="november")||((date>=1||date<=21)&& month=="december"))
{
  sign="saggittarius";  
}
else if((date>=22&&month=="december")||((date>=1||date<=19)&& month=="january"))
{
  sign="capricon";  
}
else if((date>=20&&month=="january")||((date>=1||date<=18)&& month=="february"))
{
  sign="aquarius";  
}
else if((date>=19&&month=="february")||((date>=1||date<=18)&& month=="march"))
{
  sign="pisces";  
}
return sign;





}