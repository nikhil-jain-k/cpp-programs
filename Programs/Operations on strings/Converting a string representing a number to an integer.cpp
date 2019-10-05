#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char str[50];
    puts("Enter String");
    gets(str);
    int i=0,d,sum=0;
    while(str[i]!='\0')
    {
        d=str[i]-'0';
        sum=sum+d;
        i++;
    }
    cout<<"Sum of equivalent numerical digit present in the string is "<<sum;
}
