#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char c;
cout<<"enter a character";
cin>>c;
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
cout<<"is an alphabet",<<c;
}
else
{
cout<<" is not an alphabet",<<c;
}
}
getch();
}
