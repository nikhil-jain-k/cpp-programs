#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main(){
char name[20];
int i,j,n,temp;
cout<<"Enter name:\t";
    gets(name);
    n=strlen(name);
    for(i=0,j=n-1;i<n/2;i++,j--)
        {
          temp=name[i];
          name[i]=name[j];
          name[j]=temp;

            }
    cout<<"Reverse of the string is:";
        puts(name);
}
