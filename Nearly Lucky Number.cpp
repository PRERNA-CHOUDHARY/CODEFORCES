// 138784632	Dec/11/2021 19:45UTC+5.5	c	110A - Nearly Lucky Number	GNU C++14	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count += 1;
        }
        n /= 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
    return 0;
}
