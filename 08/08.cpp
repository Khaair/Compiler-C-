#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string str,shift_action="Shift ",reduce_action="Reduce to E ";
char stuck[100];
int i,j,len,k;
void checking()
{
for(k=0; k<len; k++)
{
if(stuck[k]=='i'&&stuck[k+1]=='d')
{
stuck[k]='E';
stuck[k+1]='\0';
cout<<"$"<<stuck<<"\t"<<str<<"$\t"<<reduce_action<<endl;
j++;
}
}
for(k=0; k<len; k++)
{
if(stuck[k]=='E' && stuck[k+1]=='+' && stuck[k+2]=='E')
{
stuck[k]='E';
stuck[k+1]='\0';
stuck[k+2]='\0';
cout<<"$"<<stuck<<"\t"<<str<<"$\t"<<reduce_action<<endl;
i=i-2;
}
}
for(k=0; k<len; k++)
{
if(stuck[k]=='E'&&stuck[k+1]=='*'&&stuck[k+2]=='E')
{
stuck[k]='E';
stuck[k+1]='\0';
stuck[k+1]='\0';
cout<<"$"<<stuck<<"\t"<<str<<"$\t"<<reduce_action<<endl;
i=i-2;
}
}
for(k=0; k<len; k++)
{
if(stuck[k]=='('&&stuck[k+1]=='E'&&stuck[k+2]==')')
{
stuck[k]='E';
stuck[k+1]='\0';
stuck[k+1]='\0';
cout<<"$"<<stuck<<"\t"<<str<<"$\t"<<reduce_action<<endl;
i=i-2;
}
}
}
int main()
{
puts("Grammar is:\n\nE->E+E\nE->E*E\nE->(E)\nE->id\n\n");
cout<<"Enter the input string: ";
cin>>str;
len=str.size();
puts("\nStack\tInput\t\tAction");
//cout<<"$\t"<<str<<"$"<<"\t\t"<<shift_action;
for(i=0,j=0; j<len; i++,j++)
{
if(str[j]=='i'&&str[j+1]=='d')
{
stuck[i]=str[j];
stuck[i+1]=str[j+1];
stuck[i+2]='\0';
str[j]=' ';
str[j+1]=' ';
cout<<"$"<<stuck<<"\t"<<str<<"$"<<"\t"<<shift_action<<"id"<<endl;
checking();
}
else
{
stuck[i]=str[j];
stuck[i+1]='\0';
str[j]=' ';
cout<<"$"<<stuck<<"\t"<<str<<"$"<<"\t"<<shift_action<<"symbol"<<endl;
checking();
}
}
if(str[len-1]==' ')
cout<<"$"<<stuck<<"\t"<<str<<"$\t"<<"Accept"<<endl;
return 0;
}
