#include <bits/stdc++.h>
using namespace std;

/*

x x y y
x y x y
x y y x
y x y x
y y x x
y x x y
6 arrangements for every pair of 2 distinct numbers

numbers available / 2 * 6

1 2 3 4 5 6 7 8 9
-----------------
0 1 2 3 4 5 6 7 9 (available)
0 1 2 3 4 5 6 7 9 (available - 1)

8 * 6 = 48
7 * 6 = 42
6 * 6 = 36
5 * 6 = 30
4 * 6 = 24
3 * 6 = 18
2 * 6 = 12
1 * 6 = 6

48 + 42 + 36 + 30 + 24 + 18 + 12 + 6 = 216

= 8 * 6 + 7 * 6 + 6 * 6 + ... + 1 * 6
= (8 + 7 + 6 + ... + 1) * 6
= (n * (n + 1) / 2) * 6

*/

void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
	}
	int num = 10 - n - 1;
	cout << num * (num + 1) / 2 * 6 << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	while (T--)
		solve();
}
