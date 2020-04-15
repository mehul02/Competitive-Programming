
1243 D - 0-1 MST.cpp GNU C++17 Time limit exceeded on test 12
///==================================================///
///
///  Ir0nic_  ///
///  MEHUL BHUTALIA  ///
/// Indian Institute Of Information Technology and Management,Gwalior.  ///
///
///==================================================///
#include <bits/stdc++.h>
#ifdef LOCAL_PROJECT
#       include <prettypr.hpp>
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
ll a[max5];
void init(ll n)
{
	repp(i,1,n + 1)
	{
		a[i] = i;
	}
}
ll root(ll i)
{
	while(a[i] != i)
	{
		a[i] = a[a[i]];
		i = a[i];
	}
	return i;
}
void set_union(ll x, ll y)
{
	ll root_x = root(x);
	ll root_y = root(y);
	a[root_y] = root_x;
}

int main()
{

	ll n,m;
	sc2(n,m)
	ll aa,b;
	vector<ll> v[max5];
	rep(i,m)
	{
		sc2(aa,b);
		v[aa].p_b(b);
		v[b].p_b(aa);
	}
	init(n);
	rep(i,n)
	{
		v[i+1].p_b(n+1), v[i+1].p_b(1);
		sortv(v[i+1]);
	}
	for(ll i = 1; i <= n; i++)
	{
		rep(j,v[i].size()-1)
		{
			for(ll k=v[i][j]+1;k<v[i][j+1];k++)
			{
				set_union(i,k);
				//debug2(i,k);
			}
		}
	}

	set<ll> s;
	rep(i,n)
	s.insert(root(i+1));
	pr(s.size()-1);
}
