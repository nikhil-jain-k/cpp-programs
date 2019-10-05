//sorting of names
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char name[50][20],temp[20],i,j;      //name[names(row)][characters]
    int n;
    puts("How many names?");
    cin>>n;
    puts("Enter the names");
    for(i=0;i<n;i++)
    {
           fflush(stdin);
           gets(name[i]);
    }
    //sorting logic (bubble sort)
    for(i=0;i<=n;i++)
        for(j=0;j<n-1-i;j++)
    {
        if(strcmp(name[j],name[j+1])>0)
        {
            //in swapping string cant be assigned as temp variable, so use strcpy to copy contents of the string
            //strcpy(destination,source)
            strcpy(temp,name[j]);
            strcpy(name[j],name[j+1]);
            strcpy(name[j+1],temp);
        }
    }
    cout<<"The sorted names are\n";
    for(i=0;i<n;i++)
        puts(name[i]);
    cout<<"\n";
}
