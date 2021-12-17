#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, t = 0, n;
    cin >> n ;
    int min, max,a[n];
    cin>>a[0];
    min = a[0];
    max = a[0];
    for (i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i] > max) {
            max = a[i];
            t++;
        }else if (a[i] < min) {
            min = a[i];
            t++;
        }
    }
    cout << t << endl;
}
