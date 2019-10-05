#include<iostream>
using namespace std;
int main()
{
int m,n,p,q,a[50][50],b[50][50],c[50][50],i,j,k;
cout<<"enter dimension for A \n";
cin>>m>>n;
cout<<"enter dimension for B\n";
cin>>p>>q;
if(n!=p)
{
   cout<<"not multiplicable \n";
   return 0;
}
cout<<"Enter elements for A \n";
for (i=0;i<m;i++)
     for(j=0;j<n;j++)
   	cin>>a[i][j];
cout<<"Enter elements for B \n";
for(i=0;i<p;i++)
   for(j=0;j<q;j++)
      cin>>b[i][j];

for(i=0;i<m;i++)
   for(j=0;j<q;j++)
   {
     c[i][j]=0;
     for(k=0;k<n;k++)
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
   }
cout<<"\n The product matrix is \n";
for(i=0;i<m;i++)
{
  for(j=0;j<q;j++)
    {
       cout<<"\t"<<c[i][j];
   }
  cout<<"\n";
}
}
