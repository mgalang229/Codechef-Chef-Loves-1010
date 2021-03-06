#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		// find the minimum frequency between 1s and 0s and decrement it (if it's greater than 0)
		int ones = count(s.begin(), s.end(), '1');
		int zeroes = count(s.begin(), s.end(), '0');
		int mn = min(ones, zeroes);
		if (mn > 0) {
			mn -= 1;
		}
		cout << mn << '\n';
	}
	return 0;
}
