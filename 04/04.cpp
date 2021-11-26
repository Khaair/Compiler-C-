#include<bits/stdc++.h>
using namespace std;
int check(string s)
{
if(s=="auto"||s=="int"||s=="char"||s=="long"||s=="float"||s=="double"||s=="struct"||s=="if"||s=="else"||s=="break"||s=="continue"||
s=="while"||s=="do"||s=="for"||s=="return"||s=="signed"||s=="unsigned"||s=="default"||s=="goto"||s=="case"||s=="sizeof"||s=="short"||
s=="switch"||s=="void"||s=="static"||s=="typdef")
return 1;
else
return 0;
}
int main()
{
char t,f,ch;
int n,k;
int anu;
string st;
freopen("Input.txt","r",stdin);
char pre_value='7';
printf("Keywords are given bellow\n\n");
while(cin>>st)
{
if(check(s))
{
cout<<st<<" is a keyword\n";
}
}
return 0;
}
