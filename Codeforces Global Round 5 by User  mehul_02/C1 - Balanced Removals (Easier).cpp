
1237 C1 - Balanced Removals (Easier).cpp GNU C++17 Accepted
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
struct node {
	ll a = 0;
	ll b = 0;
	ll c = 0;
	ll d = 0;
};

ll dist(node a, node b)
{

	return (( a.a - b.a ) * ( a.a - b.a ) + ( a.b - b.b ) * ( a.b - b.b ) + ( a.c - b.c ) * ( a.c - b.c ));
}
struct my {
	ll a;
	ll i;
	ll j;
};
bool cmp(my& a,my& b)
{
	return a.a < b.a;
}

int main()
{
	fast
	ll n;
	sc(n)
	ll a,b,c;
	node arr[n];

	rep(i,n)
	{
		sc3(a,b,c);
		node temp;
		temp.a = a,temp.b = b,temp.c = c,temp.d = i;
		arr[i] = temp;
	}
	//sort(arr,arr + n,cmp);

	vector<my> mp(n * ( n - 1 ) / 2);
	ll cc = 0;
	rep(i,n)
	{
		repp(j,i + 1,n)
		{
			my temp;
			temp.a = dist(arr[i],arr[j]);
			temp.i = i;
			temp.j = j;
			mp[cc] = temp;
			cc++;
		}
	}
	sort(all(mp),cmp);
	ll aux[n] = {0};
	for(auto it:mp)
	{

		if(aux[it.i] == 1 || aux[it.j] == 1)
			continue;
		ll i = it.i,j = it.j;
		cout << i + 1 << " " << j + 1 << "\n";
		aux[i] = 1,aux[j] = 1;
	}
}

1237 C1 - Balanced Removals (Easier).cpp GNU C++17 Time limit exceeded on pretest 6
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
struct node {
	ll a = 0;
	ll b = 0;
	ll c = 0;
	ll d = 0;
};
bool cmp(node aa,node ba)
{
	if(aa.a == ba.a && aa.b == ba.b)
		return aa.c < ba.c;
	if(aa.a == ba.a)
		return aa.b < ba.b;
	return aa.a < ba.a;
}
ll dist(node a, node b)
{
	return (( a.a - b.a ) * ( a.a - b.a ) + ( a.b - b.b ) * ( a.b - b.b ) + ( a.c - b.c ) * ( a.c - b.c ));
}
int main()
{
	fast
	ll n;
	sc(n)
	ll a,b,c;
	node arr[n];

	rep(i,n)
	{
		sc3(a,b,c);
		node temp;
		temp.a = a,temp.b = b,temp.c = c,temp.d = i;
		arr[i] = temp;
	}
	//sort(arr,arr + n,cmp);
	map<ll,vector<pii > > mp;
	rep(i,n)
	{
		repp(j,i + 1,n)
		{
			mp[dist(arr[i],arr[j])].p_b({i,j});
		}
	}
	ll aux[n] = {0};
	for(auto it:mp)
	{
		for(auto itr:it.ss)
		{
			if(aux[itr.ff] == 1 || aux[itr.ss] == 1)
				continue;
			ll i = itr.ff,j = itr.ss;
			cout << i + 1 << " " << j + 1 << "\n";
			aux[i] = 1,aux[j] = 1;
		}
	}
}

1237 C1 - Balanced Removals (Easier).cpp GNU C++17 Time limit exceeded on pretest 6
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
struct node {
	ll a = 0;
	ll b = 0;
	ll c = 0;
	ll d = 0;
};
bool cmp(node aa,node ba)
{
	if(aa.a == ba.a && aa.b == ba.b)
		return aa.c < ba.c;
	if(aa.a == ba.a)
		return aa.b < ba.b;
	return aa.a < ba.a;
}
ll dist(node a, node b)
{
	return (( a.a - b.a ) * ( a.a - b.a ) + ( a.b - b.b ) * ( a.b - b.b ) + ( a.c - b.c ) * ( a.c - b.c ));
}
int main()
{
	fast
	ll n;
	sc(n)
	ll a,b,c;
	node arr[n];

	rep(i,n)
	{
		sc3(a,b,c);
		node temp;
		temp.a = a,temp.b = b,temp.c = c,temp.d = i;
		arr[i] = temp;
	}
	//sort(arr,arr + n,cmp);
	multimap<ll,pii> mp;
	rep(i,n)
	{
		repp(j,i + 1,n)
		{
			mp.insert({dist(arr[i],arr[j]),{i,j}});
		}
	}
	ll aux[n] = {0};
	for(auto it:mp)
	{
		if(aux[it.ss.ff] == 1 || aux[it.ss.ss] == 1)
			continue;
		ll i = it.ss.ff,j = it.ss.ss;
		pr(i + 1,j + 1);
		aux[i] = 1,aux[j] = 1;
	}
}
