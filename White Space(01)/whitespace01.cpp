#include<iostream>
#include<stdio.h>
using namespace std;
int sign_check(char pre_value)
{
    if(pre_value=='+'||pre_value=='-'||pre_value=='*'||pre_value=='/'||pre_value=='%'||pre_value=='=')
        return 1;
    else
        return 0;
}
int main()
{
    int n,len,s,i;
    char pre_value=' ';
    string str;
    FILE *f2;
    freopen("Input.txt","r",stdin);
    f2=fopen("Output.txt","w");
    printf("Collect no. given below\n");
    while(getline(cin,str))
    {
        len =str.size();
        for(i=0; i<len; i++)
        {
            if(str[i]!=' ')
                putc(str[i],f2);
        }
        putc('\n',f2);
        for(i=0; i<len; i++)
        {
            if(str[i]>='0'&&str[i]<='9')
            {
                s=str[i]-'0';
                for(i=i+1; i<len; i++)
                {
                    if(str[i]>='0'&&str[i]<='9')
                        s=s*10+(str[i]-'0');
                    else
                        break;
                }
                i--;
                if(pre_value=='['&&str[i+1]==']')
                    cout<<s<<endl;
                else if((sign_check(pre_value)||pre_value==' ')&&(sign_check(str[i+1])||str[i+1]==';'||i==len))
                    cout<<s<<endl;
            }
            else
                pre_value=str[i];
        }
    }
    return 0;
}
