
1334 C - Circle of Monsters.cpp GNU C++17 Accepted
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
#define     nl              cout << endl;
#define     prarr(arr)      rep(i,sizeof( arr ) / sizeof( ll )) cout << arr[i] << " "; nl
#define     prvec(v)        rep(i,v.size()) cout << v[i] << " "; nl
#define     pr2d(arr,n,m)   rep(i,n){rep(j,m) cout << arr[i][j] << " "; nl}

///==========DEBUGGING=============///
#define     debug(a)            cout << "*" << a << endl;
#define     debug2(a,b)         cout << "$" << a << " " << b << endl;
#define     debug3(a,b,c)       cout << "$" << a << " " << b << " " << c << endl;
#define     bug                 cout << "#" << endl;

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
    T()
    {
        ll n;
        sc(n);
        vpair v(n);
        rep(i, n)
        {
            sc2(v[i].ff, v[i].ss);
        }
        ll ans = 0, sub = 0, idx = 0;
        rep(j, n)
        {

            ans += max(v[(idx + j) % n].ff - sub, 0ll);
            sub = v[(idx + j) % n].ss;
        }
        ll prev = ans;
        repp(i, 1, n)
        {
            ll temp = prev - v[i - 1].ff;
            if (v[i - 1].ff > v[(i - 2 + n) % n].ss)
                temp += v[i - 1].ff - v[(i - 2 + n) % n].ss;
            temp += min(v[i - 1].ss, v[i].ff);
            ans = min(ans, temp);
            prev = temp;
        }
        pr(ans);
    }
}

/*
1
4
2 2
2 2
8 1
2 2
*/
1334 C - Circle of Monsters.cpp GNU C++17 Wrong answer on test 2
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
#define     nl              cout << endl;
#define     prarr(arr)      rep(i,sizeof( arr ) / sizeof( ll )) cout << arr[i] << " "; nl
#define     prvec(v)        rep(i,v.size()) cout << v[i] << " "; nl
#define     pr2d(arr,n,m)   rep(i,n){rep(j,m) cout << arr[i][j] << " "; nl}

///==========DEBUGGING=============///
#define     debug(a)            cout << "*" << a << endl;
#define     debug2(a,b)         cout << "$" << a << " " << b << endl;
#define     debug3(a,b,c)       cout << "$" << a << " " << b << " " << c << endl;
#define     bug                 cout << "#" << endl;

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
    T()
    {
        ll n;
        sc(n);
        vpair v(n);
        rep(i, n)
        {
            sc2(v[i].ff, v[i].ss);
        }
        ll dp[n] = {0}, minn = inf, idx = -1;
        rep(i, n)
        {
            if (v[i].ff < minn)
            {
                idx = i;
                minn = v[i].ff;
            }
            else if (v[i].ff == minn)
            {
                ll prev = (i - 1 + n) % n;
                ll next = (i + 1) % n;
                if (v[i].ff != v[prev].ff)
                    idx = i;
            }
            if (v[i].ss >= v[(i + 1) % n].ff)
                dp[i] = 1;
        }
        // ll idx = -1, prev;
        // rep(i, n)
        // {
        //     prev = (i - 1 + n) % n;
        //     if (dp[i] == 0 && dp[prev] == 1)
        //     {
        //         idx = i;
        //         break;
        //     }
        // }
        // if (idx == -1)
        // {
        //     pr(minn);
        //     continue;
        // }
        // prarr(dp);
        // debug(idx);
        ll ans = 0, sub = 0;
        rep(j, n)
        {

            ans += max(v[(idx + j) % n].ff - sub, 0ll);
            sub = v[(idx + j) % n].ss;
        }
        pr(ans);
    }
}

/*
1
4
2 2
2 2
8 1
2 2
*/
1334 C - Circle of Monsters.cpp GNU C++17 Wrong answer on test 2
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
#define     nl              cout << endl;
#define     prarr(arr)      rep(i,sizeof( arr ) / sizeof( ll )) cout << arr[i] << " "; nl
#define     prvec(v)        rep(i,v.size()) cout << v[i] << " "; nl
#define     pr2d(arr,n,m)   rep(i,n){rep(j,m) cout << arr[i][j] << " "; nl}

///==========DEBUGGING=============///
#define     debug(a)            cout << "*" << a << endl;
#define     debug2(a,b)         cout << "$" << a << " " << b << endl;
#define     debug3(a,b,c)       cout << "$" << a << " " << b << " " << c << endl;
#define     bug                 cout << "#" << endl;

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
    T()
    {
        ll n;
        sc(n);
        vpair v(n);
        rep(i, n)
        {
            sc2(v[i].ff, v[i].ss);
        }
        ll dp[n] = {0}, minn = inf, idx = -1;
        rep(i, n)
        {
            if (minn > v[i].ff)
            {
                idx = i;
                minn = v[i].ff;
            }
            if (v[i].ss >= v[(i + 1) % n].ff)
                dp[i] = 1;
        }
        // ll idx = -1, prev;
        // rep(i, n)
        // {
        //     prev = (i - 1 + n) % n;
        //     if (dp[i] == 0 && dp[prev] == 1)
        //     {
        //         idx = i;
        //         break;
        //     }
        // }
        // if (idx == -1)
        // {
        //     pr(minn);
        //     continue;
        // }
        // prarr(dp);
        // debug(idx);
        ll ans = 0, sub = 0;
        rep(j, n)
        {

            ans += max(v[(idx + j) % n].ff - sub, 0ll);
            sub = v[(idx + j) % n].ss;
        }
        pr(ans);
    }
}
