#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,k,l,c,d,p,nl,np,t1,t2,t3;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
   t1=k*l/nl;
   t2=p/np;
   t3=c*d;
   int ans=min(t1,min(t2,t3))/n;
   cout<<ans;

    return 0;
}
