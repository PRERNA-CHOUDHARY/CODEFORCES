#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,digit,len=0,num=0;
        cin>>n;
        while(n)
        {
            digit=n%10;
            len++;
            n/=10;
        }
       
        num=10*(digit-1);

        for(int i=1;i<=len;i++)
        num+=i;
        cout<<num<<"\n";
    }

    return 0;
}
