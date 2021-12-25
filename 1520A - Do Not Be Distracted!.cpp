#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0;i<str.length()-1;i++) //FFGZZZ
        {
            for(int j=i+1;j<str.length();j++)//FGZZZY
            {
                if(str[i]==str[j])
                {
                    if(j!=i+1)
                    {
                        flag++;
                        break;
                    }
                    break;
                }
            }
            if(flag!=0)
            {
                break;
            }
        }
        if(flag!=0)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}
