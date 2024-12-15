#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<bool> vis(n);
    vector<ll> ans(n, -1);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--;
        ll num = a[i];
        if (!vis[num]) {
            ans[i] = num;
            vis[num] = 1;
        }
    }
    ll num = 0;
    for (ll i = 0; i < n; i++) {
        if (ans[i] == -1) {
            while (vis[num]) num++;
            ans[i] = num;
            vis[num] = 1;
        }
    }
    for (ll i = 0; i < ans.size(); i++) {
        cout <<  ans[i] + 1 << " \n"[i == ans.size() - 1];
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

     #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

	int tc;
	cin >> tc;
	while (tc--) {
		solve();
	}


    return 0;
}