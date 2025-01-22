#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define F  first
#define S  second
#define pb  push_back
#define vi vector<int>
#define vvi vector<vi>

using namespace std;


//https://codeforces.com/problemset/problem/630/A


const int mod = 1e9 + 7;
int power( int a , ll b)
{
	if ( b == 1)
		return a;
	long long c = power( a , b / 2 );
	if (b % 2)
		return (c * a * c) % 100;
	return (c * c) % 100;
}

void solve() {

	ll n; cin >> n;
	cout << power(5, n) << endl;

}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}
