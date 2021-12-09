#include<bits/stdc++.h>
using namespace std;

int main ()
{
int i,j,m,n;
int a[5][5];
for(i=0;i<5;i++)
for(j=0;j<5;j++)
{
    cin>>a[i][j];
    if(a[i][j]!=0)
    {
        m=i;
        n=j;
        
    }
    
}
cout<<abs(m-2)+abs(n-2);
  return 0;
}
