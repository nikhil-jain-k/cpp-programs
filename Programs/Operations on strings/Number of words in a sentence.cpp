//Program to find words in a given string
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    char str[20];
    int i=0,count=1;
    cout<<"Enter a sentence:\t";
    gets(str);
    while(str[i]!='\0'i/){
    if((str[i]==' ')&&(str[i+1]!=' '))
            count++;
    i++;
    }
    cout<<"Number of words are "<<count;
}
