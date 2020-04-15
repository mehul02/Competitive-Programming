
1323 B - Count Subrectangles.cpp GNU C++17 Accepted
// clang-format off
///==================================================///
///
///  Ir0nic_  ///
///  MEHUL BHUTALIA  ///
/// Indian Institute Of Information Technology and Management,Gwalior.  ///
///
///==================================================///

#include <bits/stdc++.h>
#ifdef LOCAL_PROJECT
#include <prettypr.hpp>
#endif
#define     T()                 ll tt;    cin >> tt;        while(tt--)
#define     ll                  long long
#define     vi                  vector<ll>
#define     pii                 pair<ll,ll>
#define     vpair               vector< pii >
#define     fast                ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define     repp(i,a,n)         for(ll i = a; i < n; ++i)
#define     rep(i,n)            for(ll i = 0; i < n; ++i)
#define     rrep(i,n)           for(ll i = n - 1; i >= 0; --i)
#define     p_b                 push_back
#define     p_f                 push_front
#define     pop_b               pop_back()
#define     pop_f               pop_front()
#define     m_p                 make_pair
#define     sumv(v)             accumulate(v.begin(),v.end(),0);
#define     sortv(v)            sort(v.begin(),v.end())
#define     sort_dec(v)         sort(v.begin(),v.end(),greater<ll>() )
#define     l_b(v,l)            lower_bound (v.begin(), v.end(), l)
#define     u_b(v,l)            upper_bound (v.begin(), v.end(), l)
#define     pq                  priority_queue
#define     ff                  first
#define     ss                  second
#define     len                 length()
#define     all(v)              v.begin(),v.end()
#define     mset(a,b)           memset(a,b,sizeof( a ));
#define     endl                '\n'
///==========INPUT=============///
#define     sc(a)           cin >> a;
#define     sc2(a,b)        cin >> a >> b;
#define     sc3(a,b,c)      cin >> a >> b >> c;
#define     sc4(a,b,c,d)    cin >> a >> b >> c >> d;

///==========PRINTING=============///
#define     prarr(arr)      rep(i,sizeof( arr ) / sizeof( ll )) cout << arr[i] << " "; nl
#define     prvec(v)        rep(i,v.size()) cout << v[i] << " "; nl
#define     pr2d(arr,n,m)   rep(i,n){rep(j,m) cout << arr[i][j] << " "; nl}

///==========DEBUGGING=============///
#define     debug(a)            cout << "*" << a << endl;
#define     debug2(a,b)         cout << "$" << a << " " << b << endl;
#define     debug3(a,b,c)       cout << "$" << a << " " << b << " " << c << endl;
#define     bug                 cout << "#" << endl;
#define     nl                  cout << endl;

///==========CONSTANTS=============///
#define     max6     1000005
#define     max5     100004
#define     max4     10003
#define     mod      1000000007
#define     inf      1e18
ll powermod(ll _a,ll _b,ll _m)    {
	ll _r = 1; while(_b) {if(_b % 2 == 1) _r = ( _r * _a ) % _m; _b /= 2; _a = ( _a * _a ) % _m;} return _r;
}
using namespace std;
template < typename T > void pr (const T& t) {
	cout << t << "\n";
}

template < typename T, typename U, typename ... ARGS >
void pr (const T& t, const U& u, const ARGS& ... args) {
	cout << t << " ";
	pr (u, args ...);
}
// clang-format on
int main()
{
	fast;
	ll n, m, k;
	sc3(n, m, k);
	ll arr[n], brr[m];
	rep(i, n)
		sc(arr[i]);
	rep(i, m)
		sc(brr[i]);
	map<ll, int> mp;
	for (ll i = 1; i * i <= k; i++)
	{
		if (k % i == 0)
		{
			if ((k / i) != i)
				mp[k / i] = i;
			mp[i] = k / i;
		}
	}
	//pr(mp);
	ll c = 0, ans = 0, sum = 0;
	vi v;
	rep(i, m)
	{
		if (brr[i] == 1)
			c++;
		else
		{
			if (c != 0)
				v.p_b(c);
			c = 0;
		}
	}
	if (c != 0)
		v.p_b(c);
	c = 0;
	vi v2;
	rep(i, n)
	{
		if (arr[i] == 1)
			c++;
		else
		{
			if (c != 0)
				v2.p_b(c);
			c = 0;
		}
	}
	if (c != 0)
		v2.p_b(c);
	sortv(v);
	sortv(v2);
	n = v.size(), m = v2.size();
	ll pre1[n + 1] = {0}, pre2[m + 1] = {0};
	rep(i, n)
	{
		pre1[i + 1] = pre1[i] + v[i];
	}
	rep(i, m)
	{
		pre2[i + 1] = pre2[i] + v2[i];
	}
	for (auto it : mp)
	{
		//debug2(it.ff, it.ss);
		ll idx = l_b(v, it.ff) - v.begin();
		ll temp = pre1[n] - pre1[idx];
		temp -= (n - idx) * (it.ff - 1);
		ll idx2 = l_b(v2, it.ss) - v2.begin();
		ll temp2 = pre2[m] - pre2[idx2];
		temp2 -= (m - idx2) * (it.ss - 1);
		ans += temp * temp2;
	}
	pr(ans);
}
