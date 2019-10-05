/*How to find the length of  a string without a strlen?
len=0;
while(str[len]!='\0')
{
len++;
}
*/
//Finding substring in main string
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char  str1[50],str2[10];
    int i,j;
    cout<<"Enter a string\n";
    gets(str1);
    puts("Enter the substring");
    gets(str2);
    for(i=0,j=0;str1[i]!='\0' && str2[j]!='\0';i++)
    {
        if(str1[i]==str2[j])
            j++;
        else
            j=0;
    }
    if(j==strlen(str2))
        {cout<<"Substring "<<str2<<" found at position "<<i-j+1;
        j=0;}
    else
        cout<<"Substring not found";
}
