#include<iostream>
using namespace std;
int main()
{
  int a[50][50],i,j,m,n;
  cout<<" Enter order of matrix:\n";
  cin>>m>>n;
  if(m!=n)
    cout<<"It is not a square matrix \n";
  else
  {
   cout<<"Enter elements \n";
   for(i=0;i<m;i++)
       for(j=0;j<n;j++)
           cin>>a[i][j];
  }
  for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
       if(a[i][j]!=a[j][i])
       {
            cout<<"\n Not Symmetric";
            return 0;
        }
    }
 }
cout<<"\n Matrix is symmetric";
}
