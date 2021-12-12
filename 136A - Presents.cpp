
#include <bits/stdc++.h>

using namespace std;
int n, b, friend[105];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> b;
        friend[b] = i; 
    }
    for (int i = 1; i <= n; i++) {
        cout << friend[i] << " ";
    }
}
