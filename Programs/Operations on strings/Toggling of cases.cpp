//toggling of cases
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
char str[30];
cout<<"Enter the string\n";
gets(str);
int i=0;
while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else
            if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        i++;
    }
    cout<<"Toggled String is: ";
    puts(str);
}
