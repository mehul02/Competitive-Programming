
1182 C - Beautiful Lyrics.cpp GNU C++14 Wrong answer on pretest 5
///==================================================///
	///
	///  Ir0nic_  ///
    ///  MEHUL BHUTALIA  ///
	/// Indian Institute Of Information Technology and Management,Gwalior.  ///
	///
///==================================================///
#include<bits/stdc++.h>
#define     T()                 ll t;    cin>>t;        while(t--)
#define     ll                  long long
#define     vi                  vector<ll>
#define     pii                 pair<ll,ll>
#define     vpair               vector< pii >
#define     fast                ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define     repp(i,a,n)         for(ll i= a ; i < n ; ++i)
#define     rep(i,n)            for(ll i= 0 ; i < n ; ++i)
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
#define     mset(a,b)           memset(a,b,sizeof(a));

///==========INPUT=============///
#define     sc(a)           cin>>a;
#define     sc2(a,b)        cin>>a>>b;
#define     sc3(a,b,c)      cin>>a>>b>>c;
#define     sc4(a,b,c,d)    cin>>a>>b>>c>>d;

///==========PRINTING=============///
#define     prarr(arr)      rep(i,sizeof(arr)/sizeof(ll)) cout<<arr[i]<<" "; nl
#define     prvec(v)        rep(i,v.size()) cout<<v[i]<<" "; nl
#define     pr(x)           cout<<x<<"\n";
#define     pr2(x, y)       cout<<x<<" "<<y<<"\n";
#define     pr3(x, y, z)    cout<<x<<" "<<y<<" "<<z<<"\n";

///==========DEBUGGING=============///
#define     debug(a)            cout<<"*"<<a<<endl;
#define     debug2(a,b)         cout<<"$"<<a<<" "<<b<<endl;
#define     debug3(a,b,c)       cout<<"$"<<a<<" "<<b<<" "<<c<<endl;
#define     bug                 cout<<"#"<<endl;
#define     nl                  cout<<'\n';
#define     endl                '\n'

///==========CONSTANTS=============///
#define     max6     1000005
#define     max5     100004
#define     max4     10003
#define     mod      1000000007
#define     inf      1e18
ll powermod(ll _a,ll _b,ll _m)    {ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}

using namespace std;

char vovel[5]={'a','e','i','o','u'};

struct triplet{
    ll cnt;
    char c;
    string s;
};
bool cmp(triplet a,triplet b)
{
    if(a.cnt==b.cnt)
    {
        if(a.c<b.c)
            return true;
        else
            return false;
    }
    if(a.cnt<b.cnt)
        return true;
    else
        return false;
}

triplet v[max5];
vector<triplet> v1,v2;
int main()
{
    fast
    ll n;
    sc(n)
    string s[n];
    rep(i,n)
    {
        sc(s[i])
        ll c=0;
        char d;
        rep(j,s[i].len)
        {
            rep(k,5)
            if(s[i][j]==vovel[k])
            {
                c++;
                d=s[i][j];
            }
        }
        v[i].cnt=c;
        v[i].c=d;
        v[i].s=s[i];
    }
    sort(v,v+n,cmp);
    for(ll i=0;i<n-1;)
    {
        if(v[i].cnt==v[i+1].cnt)
        {
            if(v[i].c==v[i+1].c)
            {
                v2.p_b(v[i]);
                v2.p_b(v[i+1]);
                i+=2;
            }
            else
            {
                 v1.p_b(v[i]);
                //v1.p_b(v[i+1]);
                i++;
            }

        }
        else
        {
            v1.p_b(v[i]);
            if(v1.size()%2==1)
                v1.pop_back();
            i++;
        }

    }
    v1.p_b(v[n-1]);
    if(v1.size()%2==1)
                v1.pop_back();
    if(v2.size()>v1.size())
    {
        ll m=v1.size();
        cout<<(m+(v2.size()-m)/2)/2;
        nl
        rep(i,m)
        cout<<v1[i].s<<" "<<v2[i].s<<endl;

        for(ll i=m;i<v2.size()-1;i+=4)
        {
            cout<<v2[i].s<<" "<<v2[i+2].s<<endl<<v2[i+1].s<<" "<<v2[i+3].s<<" "<<endl;
        }
    }
    else
    {
        pr(v2.size()/2)
        rep(i,v2.size())
        cout<<v1[i].s<<" "<<v2[i].s<<endl;
    }
}

1182 C - Beautiful Lyrics.cpp GNU C++14 Wrong answer on pretest 5
///==================================================///
	///
	///  Ir0nic_  ///
    ///  MEHUL BHUTALIA  ///
	/// Indian Institute Of Information Technology and Management,Gwalior.  ///
	///
///==================================================///
#include<bits/stdc++.h>
#define     T()                 ll t;    cin>>t;        while(t--)
#define     ll                  long long
#define     vi                  vector<ll>
#define     pii                 pair<ll,ll>
#define     vpair               vector< pii >
#define     fast                ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define     repp(i,a,n)         for(ll i= a ; i < n ; ++i)
#define     rep(i,n)            for(ll i= 0 ; i < n ; ++i)
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
#define     mset(a,b)           memset(a,b,sizeof(a));

///==========INPUT=============///
#define     sc(a)           cin>>a;
#define     sc2(a,b)        cin>>a>>b;
#define     sc3(a,b,c)      cin>>a>>b>>c;
#define     sc4(a,b,c,d)    cin>>a>>b>>c>>d;

///==========PRINTING=============///
#define     prarr(arr)      rep(i,sizeof(arr)/sizeof(ll)) cout<<arr[i]<<" "; nl
#define     prvec(v)        rep(i,v.size()) cout<<v[i]<<" "; nl
#define     pr(x)           cout<<x<<"\n";
#define     pr2(x, y)       cout<<x<<" "<<y<<"\n";
#define     pr3(x, y, z)    cout<<x<<" "<<y<<" "<<z<<"\n";

///==========DEBUGGING=============///
#define     debug(a)            cout<<"*"<<a<<endl;
#define     debug2(a,b)         cout<<"$"<<a<<" "<<b<<endl;
#define     debug3(a,b,c)       cout<<"$"<<a<<" "<<b<<" "<<c<<endl;
#define     bug                 cout<<"#"<<endl;
#define     nl                  cout<<'\n';
#define     endl                '\n'

///==========CONSTANTS=============///
#define     max6     1000005
#define     max5     100004
#define     max4     10003
#define     mod      1000000007
#define     inf      1e18
ll powermod(ll _a,ll _b,ll _m)    {ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}

using namespace std;

char vovel[5]={'a','e','i','o','u'};

struct triplet{
    ll cnt;
    char c;
    string s;
};
bool cmp(triplet a,triplet b)
{
    if(a.cnt==b.cnt)
    {
        if(a.c<b.c)
            return true;
        else
            return false;
    }
    if(a.cnt<b.cnt)
        return true;
    else
        return false;
}

triplet v[max5];
vector<triplet> v1,v2;
int main()
{
    fast
    ll n;
    sc(n)
    string s[n];
    rep(i,n)
    {
        sc(s[i])
        ll c=0;
        char d;
        rep(j,s[i].len)
        {
            rep(k,5)
            if(s[i][j]==vovel[k])
            {
                c++;
                d=s[i][j];
            }
        }
        v[i].cnt=c;
        v[i].c=d;
        v[i].s=s[i];
    }
    sort(v,v+n,cmp);
    for(ll i=0;i<n-1;)
    {
        if(v[i].cnt==v[i+1].cnt)
        {
            if(v[i].c==v[i+1].c)
            {
                v2.p_b(v[i]);
                v2.p_b(v[i+1]);
                i+=2;
            }
            else
            {
                 v1.p_b(v[i]);
                //v1.p_b(v[i+1]);
                i++;
            }

        }
        else
        {
            v1.p_b(v[i]);
            if(v1.size()%2==1)
                v1.pop_back();
            i++;
        }

    }
    if(v2.size()>v1.size())
    {
        ll m=v1.size();
        cout<<(m+(v2.size()-m)/2)/2;
        nl
        rep(i,m)
        cout<<v1[i].s<<" "<<v2[i].s<<endl;

        for(ll i=m;i<v2.size()-1;i+=4)
        {
            cout<<v2[i].s<<" "<<v2[i+2].s<<endl<<v2[i+1].s<<" "<<v2[i+3].s<<" "<<endl;
        }
    }
    else
    {
        pr(v2.size()/2)
        rep(i,v2.size())
        cout<<v1[i].s<<" "<<v2[i].s<<endl;
    }
}

1182 C - Beautiful Lyrics.cpp GNU C++14 Wrong answer on pretest 9
///==================================================///
	///
	///  Ir0nic_  ///
    ///  MEHUL BHUTALIA  ///
	/// Indian Institute Of Information Technology and Management,Gwalior.  ///
	///
///==================================================///
#include<bits/stdc++.h>
#define     T()                 ll t;    cin>>t;        while(t--)
#define     ll                  long long
#define     vi                  vector<ll>
#define     pii                 pair<ll,ll>
#define     vpair               vector< pii >
#define     fast                ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define     repp(i,a,n)         for(ll i= a ; i < n ; ++i)
#define     rep(i,n)            for(ll i= 0 ; i < n ; ++i)
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
#define     mset(a,b)           memset(a,b,sizeof(a));

///==========INPUT=============///
#define     sc(a)           cin>>a;
#define     sc2(a,b)        cin>>a>>b;
#define     sc3(a,b,c)      cin>>a>>b>>c;
#define     sc4(a,b,c,d)    cin>>a>>b>>c>>d;

///==========PRINTING=============///
#define     prarr(arr)      rep(i,sizeof(arr)/sizeof(ll)) cout<<arr[i]<<" "; nl
#define     prvec(v)        rep(i,v.size()) cout<<v[i]<<" "; nl
#define     pr(x)           cout<<x<<"\n";
#define     pr2(x, y)       cout<<x<<" "<<y<<"\n";
#define     pr3(x, y, z)    cout<<x<<" "<<y<<" "<<z<<"\n";

///==========DEBUGGING=============///
#define     debug(a)            cout<<"*"<<a<<endl;
#define     debug2(a,b)         cout<<"$"<<a<<" "<<b<<endl;
#define     debug3(a,b,c)       cout<<"$"<<a<<" "<<b<<" "<<c<<endl;
#define     bug                 cout<<"#"<<endl;
#define     nl                  cout<<'\n';
#define     endl                '\n'

///==========CONSTANTS=============///
#define     max6     1000005
#define     max5     100004
#define     max4     10003
#define     mod      1000000007
#define     inf      1e18
ll powermod(ll _a,ll _b,ll _m)    {ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}

using namespace std;

char vovel[5]={'a','e','i','o','u'};

struct triplet{
    ll cnt;
    char c;
    string s;
};
bool cmp(triplet a,triplet b)
{
    if(a.cnt==b.cnt)
    {
        if(a.c<b.c)
            return true;
        else
            return false;
    }
    if(a.cnt<b.cnt)
        return true;
    else
        return false;
}

triplet v[max5];
vector<triplet> v1,v2;
int main()
{
    fast
    ll n;
    sc(n)
    string s[n];
    rep(i,n)
    {
        sc(s[i])
        ll c=0;
        char d;
        rep(j,s[i].len)
        {
            rep(k,5)
            if(s[i][j]==vovel[k])
            {
                c++;
                d=s[i][j];
            }
        }
        v[i].cnt=c;
        v[i].c=d;
        v[i].s=s[i];
    }
    sort(v,v+n,cmp);
    for(ll i=0;i<n-1;)
    {
        if(v[i].cnt==v[i+1].cnt)
        {
            if(v[i].c==v[i+1].c)
            {
                v2.p_b(v[i]);
                v2.p_b(v[i+1]);
            }
            else
            {
                 v1.p_b(v[i]);
                v1.p_b(v[i+1]);
            }
            i+=2;
        }
        else
            i++;

    }
    if(v2.size()>v1.size())
    {
        ll m=v1.size();
        cout<<(m+(v2.size()-m)/2)/2;
        nl
        rep(i,m)
        cout<<v1[i].s<<" "<<v2[i].s<<endl;

        for(ll i=m;i<v2.size()-1;i+=4)
        {
            cout<<v2[i].s<<" "<<v2[i+2].s<<endl<<v2[i+1].s<<" "<<v2[i+3].s<<" "<<endl;
        }
    }
    else
    {
        pr(v2.size()/2)
        rep(i,v2.size())
        cout<<v1[i].s<<" "<<v2[i].s<<endl;
    }
}
