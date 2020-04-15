
1244 D - Paint the Tree.cpp GNU C++17 Wrong answer on test 6
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
#define     prvec(v)        rep(i,v.size()) cout << v[i] << " "; nls

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
ll minn = inf;
vi v[max5],ans;
void dfs(ll a,ll par)
{
	ans.p_b(a);
	if(v[a].size() == 1)
		return;
	if(v[a][0] == par)
		swap(v[a][0],v[a][1]);
	dfs(v[a][0],a);
}
int main()
{

	ll n;
	sc(n)
	ll arr[n][4];

	rep(i,n) sc(arr[i][0])

	rep(i,n) sc(arr[i][1])

	rep(i,n) sc(arr[i][2])

	ll a, b;
	rep(i,n - 1)
	{
		ll a,b;
		sc2(a,b)
		v[a].p_b(b);
		v[b].p_b(a);
	}
	ll flag = 0,rt;
	repp(i,1,n + 1)
	{
		if(v[i].size() == 1)
		{
			flag++;
			rt = i;
		}
	}
	ll final[3];

	if(flag == 2)
	{
		ans.p_b(rt);
		dfs(v[rt][0],rt);


		vector< vector<ll> > possible = {{0, 1, 2}, {0, 2, 1}, {1, 0, 2}, {1, 2, 0}, {2, 0, 1}, {2, 1, 0}};
		int idx;
		int x = 0;
		for (auto p : possible) {

			int j = 0;
			int curr = 0;
			repp (i, 1, ans.size() + 1) {
				//debug(ans[i - 1])
				curr += arr[ans[i - 1] - 1][p[j]];
				j++;
				j %= 3;
			}
			if (curr < minn) {

				idx = x;
				minn = curr;
			}
			x++;
		}
		pr (minn);
		int j = 0;
		vi aaa(n + 1);
		repp (i, 1, n + 1) {
			aaa[ans[i - 1]] = ( possible[idx][j] + 1 );
			j++;
			j %= 3;
		}
		repp(k,1,n + 1)
		cout << aaa[k] << " ";
		// pr(minn);
		// rep(i,3)
		// cout << final[i] << " ";
	}
	else
		pr(-1);
}

1244 D - Paint the Tree.cpp GNU C++17 Wrong answer on pretest 6
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
#define     prvec(v)        rep(i,v.size()) cout << v[i] << " "; nls

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
ll minn = inf;
vi v[max5],ans;
void dfs(ll a,ll par)
{
	ans.p_b(a);
	if(v[a].size() == 1)
		return;
	if(v[a][0] == par)
		swap(v[a][0],v[a][1]);
	dfs(v[a][0],a);
}
int main()
{

	ll n;
	sc(n)
	ll arr[n][4];

	rep(i,n) sc(arr[i][0])

	rep(i,n) sc(arr[i][1])

	rep(i,n) sc(arr[i][2])

	ll a, b;
	rep(i,n - 1)
	{
		ll a,b;
		sc2(a,b)
		v[a].p_b(b);
		v[b].p_b(a);
	}
	ll flag = 0,rt;
	repp(i,1,n + 1)
	{
		if(v[i].size() == 1)
		{
			flag++;
			rt = i;
		}
	}
	ll final[3];

	if(flag == 2)
	{
		ans.p_b(rt);
		dfs(v[rt][0],rt);


		vector< vector<ll> > possible = {{0, 1, 2}, {0, 2, 1}, {1, 0, 2}, {1, 2, 0}, {2, 0, 1}, {2, 1, 0}};
		int idx;
		int x = 0;
		for (auto p : possible) {

			int j = 0;
			int curr = 0;
			repp (i, 1, ans.size() + 1) {
				//debug(ans[i - 1])
				curr += arr[ans[i - 1] - 1][p[j]];
				j++;
				j %= 3;
			}
			if (curr < minn) {

				idx = x;
				minn = curr;
			}
			x++;
		}
		pr (minn);
		int j = 0;
		vi aaa;
		repp (i, 1, n + 1) {
			aaa.p_b( possible[idx][j] + 1);
			j++;
			j %= 3;
		}
		for(ll k = aaa.size() - 1; k >= 0; k--)
			cout << aaa[k] << " ";
		// pr(minn);
		// rep(i,3)
		// cout << final[i] << " ";
	}
	else
		pr(-1);
}

1244 D - Paint the Tree.cpp GNU C++17 Wrong answer on pretest 1
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
#define     prvec(v)        rep(i,v.size()) cout << v[i] << " "; nls

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
ll minn = inf;
vi v[max5],ans;
void dfs(ll a,ll par)
{
	ans.p_b(a);
	if(v[a].size() == 1)
		return;
	if(v[a][0] == par)
		swap(v[a][0],v[a][1]);
	dfs(v[a][0],a);
}
int main()
{

	ll n;
	sc(n)
	ll arr[n][4];

	rep(i,n) sc(arr[i][0])

	rep(i,n) sc(arr[i][1])

	rep(i,n) sc(arr[i][2])

	ll a, b;
	rep(i,n - 1)
	{
		ll a,b;
		sc2(a,b)
		v[a].p_b(b);
		v[b].p_b(a);
	}
	ll flag = 0,rt;
	repp(i,1,n + 1)
	{
		if(v[i].size() == 1)
		{
			flag++;
			rt = i;
		}
	}
	ll final[3];

	if(flag == 2)
	{
		ans.p_b(rt);
		dfs(v[rt][0],rt);


		vector< vector<ll> > possible = {{0, 1, 2}, {0, 2, 1}, {1, 0, 2}, {1, 2, 0}, {2, 0, 1}, {2, 1, 0}};
		int idx;
		int x = 0;
		for (auto p : possible) {

			int j = 0;
			int curr = 0;
			repp (i, 1, ans.size() + 1) {
				//debug(ans[i - 1])
				curr += arr[ans[i - 1] - 1][p[j]];
				j++;
				j %= 3;
			}
			if (curr < minn) {

				idx = x;
				minn = curr;
			}
			x++;
		}
		pr (minn);
		int j = 0;
		repp (i, 1, n + 1) {
			cout << possible[idx][j] + 1 << " ";
			j++;
			j %= 3;
		}


		// pr(minn);
		// rep(i,3)
		// cout << final[i] << " ";
	}
	else
		pr(-1);
}
