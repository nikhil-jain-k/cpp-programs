#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int a[50][50],i,j,m,n,trace=0,sum=0;
  double norm;
  cout<<"Enter order of matrix:\n";
  cin>>m>>n;
  cout<<"Enter elements \n";
   for(i=0;i<m;i++)
       for(j=0;j<n;j++)
           cin>>a[i][j];
  for(i=0;i<m;i++)
   trace=trace + a[i][i];
  for(i=0;i<m;i++)
   for(j=0;j<n;j++)
      sum=sum+a[i][j]*a[i][j];
  norm=sqrt(sum);
  cout<<"trace = "<<trace<<endl;
  cout<<"norm="<<norm;
}
