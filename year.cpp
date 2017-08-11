#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int year;
cout<<"enter the year":
cin>>year;
if(year%4==0||year%400==0||year%100==0)
{
cout<<"the year is leap year";
}
else
{
cout<<"the year is not leap year";
}
getch();
}
