
1249 D1 - Too Many Segments (easy version).cpp GNU C++17 Accepted
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

int main()
{
	fast
	ll n,k;
	sc2(n,k)
	ll a,b,c;
	vector<pair<ll,pii > > v(n);
	rep(i,n)
	{
		sc2(a,b);
		v[i] = {a,{b,i}};
	}
	sortv(v);
	//pr(v);
	vi ans;
	set<pii > s;
	rep(i,n)
	{
		a = v[i].ff,b = v[i].ss.ff,c = v[i].ss.ss;
		if(s.empty())
		{
			s.insert({b,c});
			continue;
		}
		auto itr = s.begin();
		auto it2 = itr;
		// if(i == 1)
		// 	debug2(( *itr ).ff,a)
		while(!s.empty() && ( *itr ).ff < a)
		{
			// if(i == 1)
			// 	bug
			it2++;
			s.erase(itr);
			itr = it2;
		}
		if(s.size() < k)
			s.insert({b,c});
		else
		{
			itr = s.end();
			itr--;
			if(( *itr ).ff < b)
			{
				ans.p_b(c + 1);
				continue;
			}
			ans.p_b(( *itr ).ss + 1);
			s.erase(itr);
			s.insert({b,c});
		}
	}
	pr(ans.size());
	prvec(ans);
}
