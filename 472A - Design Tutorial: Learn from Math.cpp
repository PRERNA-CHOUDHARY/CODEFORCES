#include <bits/stdc++.h>

using namespace std;
int isNotprime(int num)
{
    for(int i=2;i<=(num/2);i++)
    {
        if(num%i==0)
        return 1;
    }
    return 0;
}
int main()
{
 int n;
 cin>>n;
 for(int i=4;i<n;i++)
 {
     int k=n-i;
     if(isNotprime(i) && isNotprime(k) )
     {
         cout<<i<<" "<<k;
         break;
     }
 }

    return 0;
}
