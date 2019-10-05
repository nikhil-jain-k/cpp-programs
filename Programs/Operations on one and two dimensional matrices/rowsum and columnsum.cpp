#include<iostream>
using namespace std;
int main()
{
int m,n,a[50][50],rowsum[50],colsum[50],i,j;
cout<<"enter dimension for A \n";
cin>>m>>n;
cout<<"enter elements of A \n";
for (i=0;i<m;i++)
       for(j=0;j<n;j++)
            cin>>a[i][j];
for(i=0; i<m; i++)
{
	rowsum[i]=0;
       for(j=0; j<n; j++)
            rowsum[i]=rowsum[i]+a[i][j];
}
for(j=0;j<n;j++)
{
      colsum[j]=0;
      for(i=0;i<m;i++)
          colsum[j]=colsum[j]+a[i][j];
}
cout<<"Row sum= ";
for(i=0;i<m;i++)
     cout<<"\t"<<rowsum[i];

cout<<"\nColumn sum= ";
for(i=0;i<n;i++)
      cout<<"\t"<<colsum[i];
}
