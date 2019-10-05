#include<iostream>
using namespace std;
int main()
{
  int a[50][50],i,j,m,n;
  cout<<" Enter order of matrix:\n";
  cin>>m>>n;
  cout<<"Enter the elements of matrix:\n";
  for(i=0;i<m;i++)
      for(j=0;j<n;j++)
           cin>>a[i][j];
  for(i=0;i<m;i++)
   {
     for(j=0;j<n;j++)
     {
         if(i<j)
             if (a[i][j] != 0)
             {
                cout<<"Matrix is not a Lower Triangular Matrix";
                return 0;
             }
     }
   }
   cout<<"Matrix is a Lower Triangular Matrix\n";
   for(i=0;i<m;i++)
   {
     for(j=0;j<n;j++)
     {
         if(i>j || i==j)
            a[i][j]=1;
     cout<<"\t"<<a[i][j];}
     cout<<endl;
   }
}
