#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("correctoutput.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}