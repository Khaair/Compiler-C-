//E->TE'
//E'->+TE'|NULL
//T->FT'
//T'->*F'|NULL
//F->(E)|a|b|c
#include<bits/stdc++.h>
using namespace std;
int i,error;
string str;
void E();
void Eds();
void T();
void Tds();
void F();
int main()
{
cout<<"Enter the input string: ";
cin>>str;
E();
if(i==str.size()&&error==0)
cout<<endl<<"String is accepted"<<endl;
else
cout<<endl<<"String is rejected"<<endl;
return 0;
}
void E()
{
T();
Eds();
}
void Eds()
{
if(str[i]=='+')
{
i++;
T();
Eds();
}
}
void T()
{
F();
Tds();
}
void Tds()
{
if(str[i]=='*')
{
i++;
F();
Tds();
}
}
void F()
{
if(str[i]=='a'||str[i]=='b'||str[i]=='c')
i++;
else if(str[i]='(')
{
E();
if(str[i]==')')
i++;
else
error=1;
}
else
error=1;
}
