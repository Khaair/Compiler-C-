#include<bits/stdc++.h>
using namespace std;
int main()
{
int len,i,j,k,kk,check=0;
string str;
while(1)
{
cout<<"Enter the string: ";
cin>>str;
len=str.size();
for(i=0; i<len; i++)
{
if(str[i]=='|')
break;
}
j=i;
kk=j+1;
for(k=0; k<len; k++,kk++)
{
if(str[k]!=str[kk])
{
check=1;
break;
}
}
if(check && k!=0)
{
cout<<"A-> ";
for(i=0; i<k; i++)
cout<<str[i];
cout<<"A'"<<endl;
cout<<"A'-> ";
if(k==j)
cout<<"#";
for(i=k; i<j; i++)
cout<<str[i];
cout<<"|";
for(i=j+k+1; i<len; i++)
cout<<str[i];
cout<<endl;
}
else
{
cout<<"A-> ";
for(i=0; i<j+1; i++)
cout<<str[i];
cout<<"A'"<<endl;
cout<<"A'-> ";
for(i=j+1; i<len; i++)
cout<<str[i];
cout<<endl;
}
cout<<endl;
}
return 0;
}
