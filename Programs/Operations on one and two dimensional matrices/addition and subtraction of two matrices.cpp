#include<iostream>
using namespace std;
int main()
{
int m,n,p,q,a[50][50],b[50][50],c[50][50],choice,i,j;
cout<<"Enter row size and column size for the two matrices (Ensure that both matrices have same dimensions)\n";
cout<<"First Matrix:\n";
cin>>m>>n;
cout<<"Second Matrix";
cin>>p>>q;
 if (m!=p || n!=q)
{
   cout<<"Cannot operate. Different dimensions for both matrices. \n";
   return 0;
}
cout<<"Enter elements for the first matrix \n";
for (i=0;i<m;i++)
     for(j=0;j<n;j++)
   	cin>>a[i][j];
cout<<"Enter elements for the second matrix \n";
for(i=0;i<p;i++)
   for(j=0;j<q;j++)
      cin>>b[i][j];
cout<<"Press 1 for Addition and 2 for Subtraction";
cin>>choice;
switch(choice)
{
case 1:
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
          c[i][j]=a[i][j]+b[i][j];
break;

case 2:
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
          c[i][j]=a[i][j]+b[i][j];
break;
}
cout<<"\n Result: \n";
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
   {
       cout<<"\t"<<c[i][j];
   }
  cout<<"\n";
}
}
