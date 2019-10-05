//student structure with name,id,and cgpa as data members and sort on basis of id
//This can store data of four students
#include<iostream>
#include<stdio.h>
using  namespace std;
    struct student{
    char name[50];
    int id;
    float cgpa;
    };
int main(){
student s[4];
int i;
for(i=0;i<4;i++){
    cout<<"Enter name:";
    fflush(stdin);
    gets(s[i].name);
    cout<<"\nEnter id: ";
    cin>>s[i].id;
    cout<<"\nEnter CGPA: ";
    cin>>s[i].cgpa;
}
student temp;
//sorting of ids
for(int i=0;i<3;i++){
    for(int j=0;j<3-i;j++){
        if(s[j].id>s[j+1].id){
            temp=s[j];
            s[j]=s[j+1];
            s[j+1]=temp;
        }
    }
}
//stored data
for(i=0;i<4;i++){
    cout<<"\n"<<s[i].name<<"\t"<<s[i].id<<"\t"<<s[i].cgpa;
}
}
