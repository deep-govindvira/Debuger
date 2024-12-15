/**
 *    author:  tourist
 *    created: 15.12.2024 06:37:28
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("correctoutput.txt", "w", stdout);
    #endif
    
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<bool> was(n, false);
    vector<int> b(n, -1);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      --a[i];
      if (!was[a[i]]) {
        was[a[i]] = true;
        b[i] = a[i];
      }
    }
    int ptr = 0;
    for (int i = 0; i < n; i++) {
      if (b[i] == -1) {
        while (was[ptr]) {
          ptr += 1;
        }
        b[i] = ptr;
        was[ptr] = true;
      }
    }
    for (int i = 0; i < n; i++) {
      cout << b[i] + 1 << " \n"[i == n - 1];
    }
  }
  return 0;
}