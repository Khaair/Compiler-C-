#include<stdio.h>
#include<iostream>
using namespace std;
int check(string str)
{
if(str=="int"||str=="char"||str=="float"||str=="double"||str=="long"||str=="long"||str=="signed"||str=="unsigned")
return 1;
else
return 0;
}
int main()
{
freopen("Input.txt","r",stdin);
string str;
while(cin>>str)
{
if(check(str))
{
cout<<str<<" variable= ";
int k=0;
while(2)
{
char ch=getchar();
if(ch==';')
break;
if(k==0&&ch!=' ')
cout<<ch;
if(ch=='=')
k=1;
if(ch==',')
k=0;
}
cout<<"."<<endl;
}
}
return 0;
}

