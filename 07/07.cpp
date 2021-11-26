#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
cout<<"the grammar is: \nS->aS \nS->Sb \nS->ab\n";
cout<<"enter the string to check: ";
cin>>str;
int len=str.size();
int flag=0,i,a,b;
for(i=0; i<len; i++)
{
if(str[i]!='a')
{
a=i-1;
break;
}
}
for(i=len-1; i>=0; i--)
{
if(str[i]!='b')
{
b=i+1;
break;
}
}
if(a>=0 && b<len && a+1==b)
flag=1;
if(flag==1)
cout<<endl<<str<<" is accepted."<<endl;
else
cout<<endl<<str<<" is not accepted."<<endl;
return 0;
}
