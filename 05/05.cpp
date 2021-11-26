#include<bits/stdc++.h>
using namespace std;
int len,i;
char ch;
void infix(string str)
{
stack<char> stack_string;
str='('+str+')';
len=str.size();
for(i=0; i<len; i++)
{
if(str[i]>='a'&& str[i]<='z')
cout<<str[i];
else if(str[i]=='(')
stack_string.push('(');
else if(str[i]==')')
{
while(stack_string.top()!='(')
{
cout<<stack_string.top();
stack_string.pop();
}
stack_string.pop();
}
else if(str[i]=='+'||str[i]=='-')
{
while(1)
{
ch=stack_string.top();
if(ch=='+'||ch=='-')
break;
else if(ch=='(')
break;
cout<<ch;
stack_string.pop();
}
stack_string.push(str[i]);
}
else if(str[i]=='*'||str[i]=='/')
{
while(1)
{
ch=stack_string.top();
if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
break;
else if(ch=='(')
break;
cout<<ch;
stack_string.pop();
}
stack_string.push(str[i]);
}
else if(str[i]=='^')
stack_string.push(str[i]);
}
}
int main()
{
string str;
cout<<"Enter the expression: ";
cin>>str;
cout<<"\n=========The expression in postfix notation=========\n\n";
infix(str);
cout<<endl;
return 0;
}
