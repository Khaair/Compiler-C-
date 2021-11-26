#include<iostream>
#include<stdio.h>
using namespace std;
int punchuation_check(char pre_value)
{
if(pre_value=='+'||pre_value=='-'||pre_value=='*'||pre_value=='/'||pre_value=='%')
return 1;
else if(pre_value=='['||pre_value==']'||pre_value=='{'||pre_value=='}'||pre_value=='('||pre_value==')')
return 1;
else if(pre_value=='"'||pre_value==';'||pre_value==','||pre_value=='.'||pre_value=='\'')
return 1;
else
return 0;
}
int keyword(string str)
{
if(str=="int"||str=="char"||str=="float"||str=="double"||str=="string"||str=="typedef"||str=="long"||str=="string")
return 1;
else if(str=="while"||str=="do"||str=="for"||str=="if"||str=="else"||str=="switch"
||str=="case"||str=="break"||str=="continue")
return 1;
else if(str=="const"||str=="goto"||str=="static"||str=="union"||str=="return"||str=="default"
||str=="short"||str=="signed"||str=="unsigned"||str=="void")
return 1;
else
return 0;
}
int sign_check(char pre_value)
{
if(pre_value=='+'||pre_value=='-'||pre_value=='*'||pre_value=='/'||pre_value=='=')
return 1;
else
return 0;
}
int main()
{
char t,f;
int n,checks,s,len;
string str,stt;
FILE *f2;
freopen("Input.txt","r",stdin);
char pre_value='1';
cout<<"token token value as attributes\n";
cout<<"==================================\n";
while(getline(cin,str))
{
pre_value='1';
stt="";
len=str.size();
for(int i=0; i<len; i++)
{
if(punchuation_check(str[i]))
{
cout<<"Punchuation "<<str[i]<<"\n";
pre_value=str[i];
}
else if(str[i]=='<' or str[i]=='>' or str[i]=='=')
{
if(i+1<len)
{
if(str[i+1]=='=')
{
cout<<"CO "<<str[i]<<str[i+1]<<endl;
i++;
}
else
cout<<"RO "<<str[i]<<endl;
}
pre_value=str[i];
}
else if(str[i]==' ')
pre_value=str[i];
else if((str[i]>='0' and str[i]<='9') and sign_check(pre_value))
{
s=0;
s=s*10+str[i]-'0';
for(i=i+1; i<len; i++)
{
if((str[i]>='0' and str[i]<='9'))
s=s*10+str[i]-'0';
else
break;
}
i--;
if(pre_value=='[' and str[i+1]==']')
cout<<"num "<<s<<"\n";
else if( sign_check(pre_value) and i==len-1 )
cout<<"num "<<s<<"\n";
else if( sign_check(pre_value) and (sign_check(str[i+1]) or str[i+1]==';'))
cout<<"num "<<s<<"\n";
}
else
{
stt+=str[i];
if(punchuation_check(str[i+1]) or str[i+1]==' ' or str[i+1]=='=' or str[i+1]=='<')
{
if(keyword (stt))
cout<<"Keyword "<<stt<<"\n";
else
cout<<"ID "<<stt<<"\n";
stt="";
}
pre_value=str[i];
}
}
}
return 0;
}
