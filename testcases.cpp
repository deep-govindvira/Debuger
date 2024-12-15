#include <bits/stdc++.h>
using namespace std;

void createTestcases() {
    int tc = 1 + rand() % 10;
    cout << tc << ' ';
    while(tc--) {
        int n = 1 + rand() % 20;
        cout << n << endl;
        for (int i = 1; i <= n; i++) {
            cout << (1 + rand() % n) << ' ';
        }
    }
}

int main() {
    srand(time(0));
    freopen("input.txt", "w", stdout);
    createTestcases();
    return 0;
}