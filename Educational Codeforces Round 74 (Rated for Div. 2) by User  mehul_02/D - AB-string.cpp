
1238 D - AB-string.cpp GNU C++14 Accepted
///==================================================///
///
///  Ir0nic_  ///
///  MEHUL BHUTALIA  ///
/// Indian Institute Of Information Technology and Management,Gwalior.  ///
///
///==================================================///
#include <bits/stdc++.h>
#define     T()                 ll tt;    cin >> tt;        while(tt--)
#define     ll                  long long
#define     vi                  vector<ll>
#define     pii                 pair<ll,ll>
#define     vpair               vector< pii >
#define     fast                ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define     repp(i,a,n)         for(ll i = a; i < n; ++i)
#define     rep(i,n)            for(ll i = 0; i < n; ++i)
#define     p_b                 push_back
#define     p_f                 push_front
#define     pop_b               pop_back()
#define     pop_f               pop_front()
#define     m_p                 make_pair
#define      sumv(v)            accumulate(v.begin(),v.end(),0);
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

///==========INPUT=============///
#define     sc(a)           cin >> a;
#define     sc2(a,b)        cin >> a >> b;
#define     sc3(a,b,c)      cin >> a >> b >> c;
#define     sc4(a,b,c,d)    cin >> a >> b >> c >> d;

///==========PRINTING=============///
#define     prarr(arr)      rep(i,sizeof( arr ) / sizeof( ll )) cout << arr[i] << " "; nl
#define     prvec(v)        rep(i,v.size()) cout << v[i] << " "; nl
#define     pr(x)           cout << x << endl;
#define     pr2(x, y)       cout << x << " " << y << endl;
#define     pr3(x, y, z)    cout << x << " " << y << " " << z << endl;

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
ll solve(string s,ll n,ll f)
{
	ll a = n,b = n,ans = 0;
	rep(i,n)
	{
		if(s[i] == 'A' && a == n)
			a = i;
		else if(s[i] == 'B' && b == n)
			b = i;
	}
	rep(i,n)
	{
		if(s[i] == 'A')
			ans += i - a, a = i + 1;
		else
			ans += i - b, b = i + 1;
	}
	ans += n - a;
	ans += n - b;
	//debug(ans)
	return ans;
}
int main()
{
	fast
	ll n;
	sc(n)
	string s;
	sc(s)
	ll ans = n * ( n - 1 ) / 2;
	ans -= solve(s,n,0);
	reverse(s.begin(),s.end());
	ans -= solve(s,n,1);
	rep(i,n - 1)
	if(s[i] != s[i + 1])
		ans++;

	pr(ans)
}

1238 D - AB-string.cpp GNU C++14 Wrong answer on test 1
///==================================================///
///
///  Ir0nic_  ///
///  MEHUL BHUTALIA  ///
/// Indian Institute Of Information Technology and Management,Gwalior.  ///
///
///==================================================///
#include <bits/stdc++.h>
#define     T()                 ll tt;    cin >> tt;        while(tt--)
#define     ll                  long long
#define     vi                  vector<ll>
#define     pii                 pair<ll,ll>
#define     vpair               vector< pii >
#define     fast                ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define     repp(i,a,n)         for(ll i = a; i < n; ++i)
#define     rep(i,n)            for(ll i = 0; i < n; ++i)
#define     p_b                 push_back
#define     p_f                 push_front
#define     pop_b               pop_back()
#define     pop_f               pop_front()
#define     m_p                 make_pair
#define      sumv(v)            accumulate(v.begin(),v.end(),0);
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

///==========INPUT=============///
#define     sc(a)           cin >> a;
#define     sc2(a,b)        cin >> a >> b;
#define     sc3(a,b,c)      cin >> a >> b >> c;
#define     sc4(a,b,c,d)    cin >> a >> b >> c >> d;

///==========PRINTING=============///
#define     prarr(arr)      rep(i,sizeof( arr ) / sizeof( ll )) cout << arr[i] << " "; nl
#define     prvec(v)        rep(i,v.size()) cout << v[i] << " "; nl
#define     pr(x)           cout << x << endl;
#define     pr2(x, y)       cout << x << " " << y << endl;
#define     pr3(x, y, z)    cout << x << " " << y << " " << z << endl;

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

int main()
{
	fast
	ll n;
	sc(n)
	string s;
	sc(s)
	ll prea[n + 1],preb[n + 1];
	prea[0] = 0,preb[0] = 0;
	rep(i,n)
	{
		if(s[i] == 'A')
		{
			prea[i] = prea[i - 1] + 1;
			preb[i] = preb[i - 1];
		}
		else
		{
			prea[i] = prea[i - 1];
			preb[i] = preb[i - 1] + 1;
		}
	}
	ll ans = 0;
	for(ll i = 0; i < n; i++)
	{
		//if(s[i] == '0')
		{
			ll temp1 = upper_bound(prea + i,prea + n,prea[i + 1]) - prea;
			ans += temp1 - 1;
			ll temp2 = upper_bound(preb + i,preb + n,preb[i + 1] + 2) - preb;
			ans += n - temp2 - i;
		}
	}
	pr(ans)
}
