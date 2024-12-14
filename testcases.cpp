#include <bits/stdc++.h>
using namespace std;

void createTestcases() {
    int n = 1 + rand() % 10;
    cout << n << ' ' << endl;
    for (int i = 0; i < n; i++) {
        cout << rand() % 10 << ' ';
    }
}

int main() {
    srand(time(0));
    freopen("input.txt", "w", stdout);
    createTestcases();
    return 0;
}