
1061 C - Multiplicity.cpp GNU C++14 Accepted
///==================================================///
	///
	///  Ir0nic_  ///
    ///  MEHUL BHUTALIA  ///
	/// Indian Institute Of Information Technology and Management,Gwalior.  ///
	///
	///==================================================///
    #include<bits/stdc++.h>

    ///--------------------------------------------------------------------------------
    #define 	T() 				ll t;	cin>>t;		while(t--)
	#define		ll                  long long
	#define		vi 				    vector<ll>
	#define     pii                 pair<ll,ll>
	#define 	vpair 				vector< pii >
	#define 	fast 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#define     repp(i,a,n)         for(ll i= a ; i < n ; ++i)
	#define     rep(i,n)            for(ll i= 0 ; i < n ; ++i)
	#define 	p_b		 			push_back
	#define 	p_f 				push_front
	#define 	pop_b 				pop_back()
	#define 	pop_f 				pop_front()
	#define 	m_p 				make_pair
	#define  	sumv(v)  			accumulate(v.begin(),v.end(),0);
	#define 	sortv(v) 			sort(v.begin(),v.end())
	#define 	sort_dec(v) 		sort(v.begin(),v.end(),greater<ll>() )
	#define 	l_b(v,l)   		    lower_bound (v.begin(), v.end(), l)
	#define 	u_b(v,l)   		    upper_bound (v.begin(), v.end(), l)
	#define 	pq 					priority_queue
	#define 	ff 					first
	#define 	ss 					second
	#define     len                 length()
	#define     all(v)              v.begin(),v.end()
    #define     mset(a,b)           memset(a,b,sizeof(a));

	///==========INPUT=============///
	#define     sc(a)           scanf("%lld",&a);
    #define     sc2(a,b)        scanf("%lld%lld",&a,&b);
    #define     sc3(a,b,c)      scanf("%lld%lld%lld",&a,&b,&c);
    #define     sc4(a,b,c,d)    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

    ///==========PRINTING=============///
    #define     prarr(arr)      rep(i,sizeof(arr)/sizeof(ll)) cout<<arr[i]<<" "; nl
    #define     prvec(v)        rep(i,v.size()) cout<<v[i]<<" "; nl
    #define     pr(x)           cout<<x<<"\n";
    #define     pr2(x, y)       cout<<x<<" "<<y<<"\n";
    #define     pr3(x, y, z)    cout<<x<<" "<<y<<" "<<z<<"\n";

    ///==========DEBUGGING=============///
    #define 	debug(a) 			cout<<"*"<<a<<endl;
    #define 	debug2(a,b) 		cout<<"$"<<a<<" "<<b<<endl;
    #define 	debug3(a,b,c) 		cout<<"$"<<a<<" "<<b<<" "<<c<<endl;
	#define 	bug 				cout<<"#"<<endl;
    #define 	nl 					cout<<'\n';
    #define     endl                '\n'

    ///==========CONSTANTS=============///
    #define     max6     1000005
    #define     max5     100004
    #define     max4     10003
    #define 	mod  	 1000000007
    #define     inf      1e15
    ll powermod(ll _a,ll _b,ll _m)	{ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}

    using namespace std;
    ll arr[max5];
    ll nn;
    unordered_map<ll,ll> mp;
    ll factors(ll n)
    {
        //mp[n]+=mp[n-1];
        vi v;
        for(ll i=sqrt(n);i>=1;i--)
        {
            if(n%i==0)
            {
                if(n/i==i)
                    v.p_b(i);
                else
                {
                    v.p_b(i);
                    v.p_b(n/i);
                }

            }
        }
        sort_dec(v);
        rep(i,v.size())
        {
            mp[v[i]]=(mp[v[i]]+mp[v[i]-1])%mod;

        }
        //mp[1]++;
        //debug(mp[2]);
    }
    int main()
    {
       sc(nn)
       rep(i,nn)
       sc(arr[i])
       mp[0]=1;
       rep(i,nn)
       {
           factors(arr[i]);
       }
       ll ans=0;
       mp[0]=0;
       for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            ans+=itr->ss;
            ans%=mod;
           //debug2(itr->ff,itr->ss);
        }
        cout<<ans;
    }

1061 C - Multiplicity.cpp GNU C++14 Time limit exceeded on test 19
///==================================================///
	///
	///  Ir0nic_  ///
    ///  MEHUL BHUTALIA  ///
	/// Indian Institute Of Information Technology and Management,Gwalior.  ///
	///
	///==================================================///
    #include<bits/stdc++.h>

    ///--------------------------------------------------------------------------------
    #define 	T() 				ll t;	cin>>t;		while(t--)
	#define		ll                  long long
	#define		vi 				    vector<ll>
	#define     pii                 pair<ll,ll>
	#define 	vpair 				vector< pii >
	#define 	fast 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#define     repp(i,a,n)         for(ll i= a ; i < n ; ++i)
	#define     rep(i,n)            for(ll i= 0 ; i < n ; ++i)
	#define 	p_b		 			push_back
	#define 	p_f 				push_front
	#define 	pop_b 				pop_back()
	#define 	pop_f 				pop_front()
	#define 	m_p 				make_pair
	#define  	sumv(v)  			accumulate(v.begin(),v.end(),0);
	#define 	sortv(v) 			sort(v.begin(),v.end())
	#define 	sort_dec(v) 		sort(v.begin(),v.end(),greater<ll>() )
	#define 	l_b(v,l)   		    lower_bound (v.begin(), v.end(), l)
	#define 	u_b(v,l)   		    upper_bound (v.begin(), v.end(), l)
	#define 	pq 					priority_queue
	#define 	ff 					first
	#define 	ss 					second
	#define     len                 length()
	#define     all(v)              v.begin(),v.end()
    #define     mset(a,b)           memset(a,b,sizeof(a));

	///==========INPUT=============///
	#define     sc(a)           scanf("%lld",&a);
    #define     sc2(a,b)        scanf("%lld%lld",&a,&b);
    #define     sc3(a,b,c)      scanf("%lld%lld%lld",&a,&b,&c);
    #define     sc4(a,b,c,d)    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

    ///==========PRINTING=============///
    #define     prarr(arr)      rep(i,sizeof(arr)/sizeof(ll)) cout<<arr[i]<<" "; nl
    #define     prvec(v)        rep(i,v.size()) cout<<v[i]<<" "; nl
    #define     pr(x)           cout<<x<<"\n";
    #define     pr2(x, y)       cout<<x<<" "<<y<<"\n";
    #define     pr3(x, y, z)    cout<<x<<" "<<y<<" "<<z<<"\n";

    ///==========DEBUGGING=============///
    #define 	debug(a) 			cout<<"*"<<a<<endl;
    #define 	debug2(a,b) 		cout<<"$"<<a<<" "<<b<<endl;
    #define 	debug3(a,b,c) 		cout<<"$"<<a<<" "<<b<<" "<<c<<endl;
	#define 	bug 				cout<<"#"<<endl;
    #define 	nl 					cout<<'\n';
    #define     endl                '\n'

    ///==========CONSTANTS=============///
    #define     max6     1000005
    #define     max5     100004
    #define     max4     10003
    #define 	mod  	 1000000007
    #define     inf      1e15
    ll powermod(ll _a,ll _b,ll _m)	{ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}

    using namespace std;
    ll arr[max5];
    ll nn;
    map<ll,ll> mp;
    ll factors(ll n)
    {
        //mp[n]+=mp[n-1];
        vi v;
        for(ll i=sqrt(n);i>=1;i--)
        {
            if(n%i==0)
            {
                if(n/i==i)
                    v.p_b(i);
                else
                {
                    v.p_b(i);
                    v.p_b(n/i);
                }

            }
        }
        sort_dec(v);
        rep(i,v.size())
        {
            mp[v[i]]=(mp[v[i]]+mp[v[i]-1])%mod;

        }
        //mp[1]++;
        //debug(mp[2]);
    }
    int main()
    {
       sc(nn)
       rep(i,nn)
       sc(arr[i])
       mp[0]=1;
       rep(i,nn)
       {
           factors(arr[i]);
       }
       ll ans=0;
       mp[0]=0;
       for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            ans+=itr->ss;
            ans%=mod;
           //debug2(itr->ff,itr->ss);
        }
        cout<<ans;
    }

1061 C - Multiplicity.cpp GNU C++14 Wrong answer on pretest 1
///==================================================///
	///
	///  Ir0nic_  ///
    ///  MEHUL BHUTALIA  ///
	/// Indian Institute Of Information Technology and Management,Gwalior.  ///
	///
	///==================================================///
    #include<bits/stdc++.h>

    ///--------------------------------------------------------------------------------
    #define 	T() 				ll t;	cin>>t;		while(t--)
	#define		ll                  long long
	#define		vi 				    vector<ll>
	#define     pii                 pair<ll,ll>
	#define 	vpair 				vector< pii >
	#define 	fast 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#define     repp(i,a,n)         for(ll i= a ; i < n ; ++i)
	#define     rep(i,n)            for(ll i= 0 ; i < n ; ++i)
	#define 	p_b		 			push_back
	#define 	p_f 				push_front
	#define 	pop_b 				pop_back()
	#define 	pop_f 				pop_front()
	#define 	m_p 				make_pair
	#define  	sumv(v)  			accumulate(v.begin(),v.end(),0);
	#define 	sortv(v) 			sort(v.begin(),v.end())
	#define 	sort_dec(v) 		sort(v.begin(),v.end(),greater<ll>() )
	#define 	l_b(v,l)   		    lower_bound (v.begin(), v.end(), l)
	#define 	u_b(v,l)   		    upper_bound (v.begin(), v.end(), l)
	#define 	pq 					priority_queue
	#define 	ff 					first
	#define 	ss 					second
	#define     len                 length()
	#define     all(v)              v.begin(),v.end()
    #define     mset(a,b)           memset(a,b,sizeof(a));

	///==========INPUT=============///
	#define     sc(a)           scanf("%lld",&a);
    #define     sc2(a,b)        scanf("%lld%lld",&a,&b);
    #define     sc3(a,b,c)      scanf("%lld%lld%lld",&a,&b,&c);
    #define     sc4(a,b,c,d)    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

    ///==========PRINTING=============///
    #define     prarr(arr)      rep(i,sizeof(arr)/sizeof(ll)) cout<<arr[i]<<" "; nl
    #define     prvec(v)        rep(i,v.size()) cout<<v[i]<<" "; nl
    #define     pr(x)           cout<<x<<"\n";
    #define     pr2(x, y)       cout<<x<<" "<<y<<"\n";
    #define     pr3(x, y, z)    cout<<x<<" "<<y<<" "<<z<<"\n";

    ///==========DEBUGGING=============///
    #define 	debug(a) 			cout<<"*"<<a<<endl;
    #define 	debug2(a,b) 		cout<<"$"<<a<<" "<<b<<endl;
    #define 	debug3(a,b,c) 		cout<<"$"<<a<<" "<<b<<" "<<c<<endl;
	#define 	bug 				cout<<"#"<<endl;
    #define 	nl 					cout<<'\n';
    #define     endl                '\n'

    ///==========CONSTANTS=============///
    #define     max6     1000005
    #define     max5     100004
    #define     max4     10003
    #define 	mod  	 1000000007
    #define     inf      1e15
    ll powermod(ll _a,ll _b,ll _m)	{ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}

    using namespace std;
    ll arr[max5];
    ll nn;
    map<ll,ll> mp;
    ll factors(ll n)
    {
        //mp[n]+=mp[n-1];
        set<ll> s;
        for(ll i=sqrt(n);i>=1;i--)
        {
            if(n%i==0)
            {
                s.insert(i);
               s.insert(n/i);
            }
        }
        set<ll> :: iterator itr=s.end();
        itr--;
        while(1)
        {
            mp[(*itr)]+=mp[(*itr)-1];
            mp[(*itr)]%=mod;
            if(itr==s.begin())
                break;
            itr--;
        }
        //mp[1]++;
        //debug(mp[2]);
    }
    int main()
    {
       sc(nn)
       rep(i,nn)
       sc(arr[i])
       mp[0]=1;
       rep(i,nn)
       {
           factors(arr[i]);
       }
       ll ans=-1;
       ans+=mod;
       for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            ans+=itr->ss;
            ans%=mod;
           //debug2(itr->ff,itr->ss);
        }
        cout<<ans-1;
    }
1061 C - Multiplicity.cpp GNU C++14 Time limit exceeded on pretest 19
///==================================================///
	///
	///  Ir0nic_  ///
    ///  MEHUL BHUTALIA  ///
	/// Indian Institute Of Information Technology and Management,Gwalior.  ///
	///
	///==================================================///
    #include<bits/stdc++.h>

    ///--------------------------------------------------------------------------------
    #define 	T() 				ll t;	cin>>t;		while(t--)
	#define		ll                  long long
	#define		vi 				    vector<ll>
	#define     pii                 pair<ll,ll>
	#define 	vpair 				vector< pii >
	#define 	fast 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#define     repp(i,a,n)         for(ll i= a ; i < n ; ++i)
	#define     rep(i,n)            for(ll i= 0 ; i < n ; ++i)
	#define 	p_b		 			push_back
	#define 	p_f 				push_front
	#define 	pop_b 				pop_back()
	#define 	pop_f 				pop_front()
	#define 	m_p 				make_pair
	#define  	sumv(v)  			accumulate(v.begin(),v.end(),0);
	#define 	sortv(v) 			sort(v.begin(),v.end())
	#define 	sort_dec(v) 		sort(v.begin(),v.end(),greater<ll>() )
	#define 	l_b(v,l)   		    lower_bound (v.begin(), v.end(), l)
	#define 	u_b(v,l)   		    upper_bound (v.begin(), v.end(), l)
	#define 	pq 					priority_queue
	#define 	ff 					first
	#define 	ss 					second
	#define     len                 length()
	#define     all(v)              v.begin(),v.end()
    #define     mset(a,b)           memset(a,b,sizeof(a));

	///==========INPUT=============///
	#define     sc(a)           scanf("%lld",&a);
    #define     sc2(a,b)        scanf("%lld%lld",&a,&b);
    #define     sc3(a,b,c)      scanf("%lld%lld%lld",&a,&b,&c);
    #define     sc4(a,b,c,d)    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

    ///==========PRINTING=============///
    #define     prarr(arr)      rep(i,sizeof(arr)/sizeof(ll)) cout<<arr[i]<<" "; nl
    #define     prvec(v)        rep(i,v.size()) cout<<v[i]<<" "; nl
    #define     pr(x)           cout<<x<<"\n";
    #define     pr2(x, y)       cout<<x<<" "<<y<<"\n";
    #define     pr3(x, y, z)    cout<<x<<" "<<y<<" "<<z<<"\n";

    ///==========DEBUGGING=============///
    #define 	debug(a) 			cout<<"*"<<a<<endl;
    #define 	debug2(a,b) 		cout<<"$"<<a<<" "<<b<<endl;
    #define 	debug3(a,b,c) 		cout<<"$"<<a<<" "<<b<<" "<<c<<endl;
	#define 	bug 				cout<<"#"<<endl;
    #define 	nl 					cout<<'\n';
    #define     endl                '\n'

    ///==========CONSTANTS=============///
    #define     max6     1000005
    #define     max5     100004
    #define     max4     10003
    #define 	mod  	 1000000007
    #define     inf      1e15
    ll powermod(ll _a,ll _b,ll _m)	{ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}

    using namespace std;
    ll arr[max5];
    ll nn;
    map<ll,ll> mp;
    ll factors(ll n)
    {
        //mp[n]+=mp[n-1];
        set<ll> s;
        for(ll i=sqrt(n);i>=1;i--)
        {
            if(n%i==0)
            {
                s.insert(i);
               s.insert(n/i);
            }
        }
        set<ll> :: iterator itr=s.end();
        itr--;
        while(1)
        {
            mp[(*itr)]+=mp[(*itr)-1];
            mp[(*itr)]%=mod;
            if(itr==s.begin())
                break;
            itr--;
        }
        //mp[1]++;
        //debug(mp[2]);
    }
    int main()
    {
       sc(nn)
       rep(i,nn)
       sc(arr[i])
       mp[0]=1;
       rep(i,nn)
       {
           factors(arr[i]);
       }
       ll ans=0;
       for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            ans+=itr->ss;
            ans%=mod;
           //debug2(itr->ff,itr->ss);
        }
        cout<<ans-1;
    }
1061 C - Multiplicity.cpp GNU C++14 Wrong answer on pretest 8
///==================================================///
	///
	///  Ir0nic_  ///
    ///  MEHUL BHUTALIA  ///
	/// Indian Institute Of Information Technology and Management,Gwalior.  ///
	///
	///==================================================///
    #include<bits/stdc++.h>

    ///--------------------------------------------------------------------------------
    #define 	T() 				ll t;	cin>>t;		while(t--)
	#define		ll                  long long
	#define		vi 				    vector<ll>
	#define     pii                 pair<ll,ll>
	#define 	vpair 				vector< pii >
	#define 	fast 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#define     repp(i,a,n)         for(ll i= a ; i < n ; ++i)
	#define     rep(i,n)            for(ll i= 0 ; i < n ; ++i)
	#define 	p_b		 			push_back
	#define 	p_f 				push_front
	#define 	pop_b 				pop_back()
	#define 	pop_f 				pop_front()
	#define 	m_p 				make_pair
	#define  	sumv(v)  			accumulate(v.begin(),v.end(),0);
	#define 	sortv(v) 			sort(v.begin(),v.end())
	#define 	sort_dec(v) 		sort(v.begin(),v.end(),greater<ll>() )
	#define 	l_b(v,l)   		    lower_bound (v.begin(), v.end(), l)
	#define 	u_b(v,l)   		    upper_bound (v.begin(), v.end(), l)
	#define 	pq 					priority_queue
	#define 	ff 					first
	#define 	ss 					second
	#define     len                 length()
	#define     all(v)              v.begin(),v.end()
    #define     mset(a,b)           memset(a,b,sizeof(a));

	///==========INPUT=============///
	#define     sc(a)           scanf("%lld",&a);
    #define     sc2(a,b)        scanf("%lld%lld",&a,&b);
    #define     sc3(a,b,c)      scanf("%lld%lld%lld",&a,&b,&c);
    #define     sc4(a,b,c,d)    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

    ///==========PRINTING=============///
    #define     prarr(arr)      rep(i,sizeof(arr)/sizeof(ll)) cout<<arr[i]<<" "; nl
    #define     prvec(v)        rep(i,v.size()) cout<<v[i]<<" "; nl
    #define     pr(x)           cout<<x<<"\n";
    #define     pr2(x, y)       cout<<x<<" "<<y<<"\n";
    #define     pr3(x, y, z)    cout<<x<<" "<<y<<" "<<z<<"\n";

    ///==========DEBUGGING=============///
    #define 	debug(a) 			cout<<"*"<<a<<endl;
    #define 	debug2(a,b) 		cout<<"$"<<a<<" "<<b<<endl;
    #define 	debug3(a,b,c) 		cout<<"$"<<a<<" "<<b<<" "<<c<<endl;
	#define 	bug 				cout<<"#"<<endl;
    #define 	nl 					cout<<'\n';
    #define     endl                '\n'

    ///==========CONSTANTS=============///
    #define     max6     1000005
    #define     max5     100004
    #define     max4     10003
    #define 	mod  	 1000000007
    #define     inf      1e15
    ll powermod(ll _a,ll _b,ll _m)	{ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}

    using namespace std;
    ll arr[max5];
    ll nn;
    map<ll,ll> mp;
    ll factors(ll n)
    {
        //mp[n]+=mp[n-1];
        set<ll> s;
        for(ll i=sqrt(n);i>=1;i--)
        {
            if(n%i==0)
            {
                s.insert(i);
               s.insert(n/i);
            }
        }
        set<ll> :: iterator itr=s.end();
        itr--;
        while(1)
        {
            mp[(*itr)]+=mp[(*itr)-1];
            if(itr==s.begin())
                break;
            itr--;
        }
        //mp[1]++;
        //debug(mp[2]);
    }
    int main()
    {
       sc(nn)
       rep(i,nn)
       sc(arr[i])
       mp[0]=1;
       rep(i,nn)
       {
           factors(arr[i]);
       }
       ll ans=0;
       for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            ans+=itr->ss;
           //debug2(itr->ff,itr->ss);
        }
        cout<<ans-1;
    }

1061 C - Multiplicity.cpp GNU C++14 Wrong answer on pretest 8
///==================================================///
	///
	///  Ir0nic_  ///
    ///  MEHUL BHUTALIA  ///
	/// Indian Institute Of Information Technology and Management,Gwalior.  ///
	///
	///==================================================///
    #include<bits/stdc++.h>

    ///--------------------------------------------------------------------------------
    #define 	T() 				ll t;	cin>>t;		while(t--)
	#define		ll                  long long
	#define		vi 				    vector<ll>
	#define     pii                 pair<ll,ll>
	#define 	vpair 				vector< pii >
	#define 	fast 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#define     repp(i,a,n)         for(ll i= a ; i < n ; ++i)
	#define     rep(i,n)            for(ll i= 0 ; i < n ; ++i)
	#define 	p_b		 			push_back
	#define 	p_f 				push_front
	#define 	pop_b 				pop_back()
	#define 	pop_f 				pop_front()
	#define 	m_p 				make_pair
	#define  	sumv(v)  			accumulate(v.begin(),v.end(),0);
	#define 	sortv(v) 			sort(v.begin(),v.end())
	#define 	sort_dec(v) 		sort(v.begin(),v.end(),greater<ll>() )
	#define 	l_b(v,l)   		    lower_bound (v.begin(), v.end(), l)
	#define 	u_b(v,l)   		    upper_bound (v.begin(), v.end(), l)
	#define 	pq 					priority_queue
	#define 	ff 					first
	#define 	ss 					second
	#define     len                 length()
	#define     all(v)              v.begin(),v.end()
    #define     mset(a,b)           memset(a,b,sizeof(a));

	///==========INPUT=============///
	#define     sc(a)           scanf("%lld",&a);
    #define     sc2(a,b)        scanf("%lld%lld",&a,&b);
    #define     sc3(a,b,c)      scanf("%lld%lld%lld",&a,&b,&c);
    #define     sc4(a,b,c,d)    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

    ///==========PRINTING=============///
    #define     prarr(arr)      rep(i,sizeof(arr)/sizeof(ll)) cout<<arr[i]<<" "; nl
    #define     prvec(v)        rep(i,v.size()) cout<<v[i]<<" "; nl
    #define     pr(x)           cout<<x<<"\n";
    #define     pr2(x, y)       cout<<x<<" "<<y<<"\n";
    #define     pr3(x, y, z)    cout<<x<<" "<<y<<" "<<z<<"\n";

    ///==========DEBUGGING=============///
    #define 	debug(a) 			cout<<"*"<<a<<endl;
    #define 	debug2(a,b) 		cout<<"$"<<a<<" "<<b<<endl;
    #define 	debug3(a,b,c) 		cout<<"$"<<a<<" "<<b<<" "<<c<<endl;
	#define 	bug 				cout<<"#"<<endl;
    #define 	nl 					cout<<'\n';
    #define     endl                '\n'

    ///==========CONSTANTS=============///
    #define     max6     1000005
    #define     max5     100004
    #define     max4     10003
    #define 	mod  	 1000000007
    #define     inf      1e15
    ll powermod(ll _a,ll _b,ll _m)	{ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}

    using namespace std;
    ll arr[max5];
    ll nn;
    map<ll,ll> mp;
    ll factors(ll n)
    {
        //mp[n]+=mp[n-1];
        set<ll> s;
        for(ll i=sqrt(n);i>=1;i--)
        {
            if(n%i==0)
            {
                s.insert(i);
               s.insert(n/i);
            }
        }
        set<ll> :: iterator itr=s.end();
        itr--;
        while(1)
        {
            mp[(*itr)]+=mp[(*itr)-1];
            if(itr==s.begin())
                break;
            itr--;
        }
        mp[1]++;
        //debug(mp[2]);
    }
    int main()
    {
       sc(nn)
       rep(i,nn)
       sc(arr[i])
       //mp[0]=1;
       rep(i,nn)
       {
           factors(arr[i]);
       }
       ll ans=0;
       for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            ans+=itr->ss;
           //debug2(itr->ff,itr->ss);
        }
        cout<<ans;
    }

1061 C - Multiplicity.cpp GNU C++14 Wrong answer on pretest 8
///==================================================///
	///
	///  Ir0nic_  ///
    ///  MEHUL BHUTALIA  ///
	/// Indian Institute Of Information Technology and Management,Gwalior.  ///
	///
	///==================================================///
    #include<bits/stdc++.h>

    ///--------------------------------------------------------------------------------
    #define 	T() 				ll t;	cin>>t;		while(t--)
	#define		ll                  long long
	#define		vi 				    vector<ll>
	#define     pii                 pair<ll,ll>
	#define 	vpair 				vector< pii >
	#define 	fast 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#define     repp(i,a,n)         for(ll i= a ; i < n ; ++i)
	#define     rep(i,n)            for(ll i= 0 ; i < n ; ++i)
	#define 	p_b		 			push_back
	#define 	p_f 				push_front
	#define 	pop_b 				pop_back()
	#define 	pop_f 				pop_front()
	#define 	m_p 				make_pair
	#define  	sumv(v)  			accumulate(v.begin(),v.end(),0);
	#define 	sortv(v) 			sort(v.begin(),v.end())
	#define 	sort_dec(v) 		sort(v.begin(),v.end(),greater<ll>() )
	#define 	l_b(v,l)   		    lower_bound (v.begin(), v.end(), l)
	#define 	u_b(v,l)   		    upper_bound (v.begin(), v.end(), l)
	#define 	pq 					priority_queue
	#define 	ff 					first
	#define 	ss 					second
	#define     len                 length()
	#define     all(v)              v.begin(),v.end()
    #define     mset(a,b)           memset(a,b,sizeof(a));

	///==========INPUT=============///
	#define     sc(a)           scanf("%lld",&a);
    #define     sc2(a,b)        scanf("%lld%lld",&a,&b);
    #define     sc3(a,b,c)      scanf("%lld%lld%lld",&a,&b,&c);
    #define     sc4(a,b,c,d)    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

    ///==========PRINTING=============///
    #define     prarr(arr)      rep(i,sizeof(arr)/sizeof(ll)) cout<<arr[i]<<" "; nl
    #define     prvec(v)        rep(i,v.size()) cout<<v[i]<<" "; nl
    #define     pr(x)           cout<<x<<"\n";
    #define     pr2(x, y)       cout<<x<<" "<<y<<"\n";
    #define     pr3(x, y, z)    cout<<x<<" "<<y<<" "<<z<<"\n";

    ///==========DEBUGGING=============///
    #define 	debug(a) 			cout<<"*"<<a<<endl;
    #define 	debug2(a,b) 		cout<<"$"<<a<<" "<<b<<endl;
    #define 	debug3(a,b,c) 		cout<<"$"<<a<<" "<<b<<" "<<c<<endl;
	#define 	bug 				cout<<"#"<<endl;
    #define 	nl 					cout<<'\n';
    #define     endl                '\n'

    ///==========CONSTANTS=============///
    #define     max6     1000005
    #define     max5     100004
    #define     max4     10003
    #define 	mod  	 1000000007
    #define     inf      1e15
    ll powermod(ll _a,ll _b,ll _m)	{ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}

    using namespace std;
    ll arr[max5];
    ll nn;
    map<ll,ll> mp;
    ll factors(ll n)
    {
        if(n!=1)
        mp[n]+=mp[n-1];
        for(ll i=sqrt(n);i>=1;i--)
        {
            if(n%i==0)
            {
                mp[i]+=mp[i-1];
            }
        }
        //debug(mp[2]);
    }
    int main()
    {
       sc(nn)
       rep(i,nn)
       sc(arr[i])
       mp[0]=1;
       rep(i,nn)
       {
           factors(arr[i]);
       }
       ll ans=-1;
       for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            ans+=itr->ss;
           //debug(itr->ss);
        }
        cout<<ans;
    }

1061 C - Multiplicity.cpp GNU C++14 Wrong answer on pretest 8
///==================================================///
	///
	///  Ir0nic_  ///
    ///  MEHUL BHUTALIA  ///
	/// Indian Institute Of Information Technology and Management,Gwalior.  ///
	///
	///==================================================///
    #include<bits/stdc++.h>

    ///--------------------------------------------------------------------------------
    #define 	T() 				ll t;	cin>>t;		while(t--)
	#define		ll                  long long
	#define		vi 				    vector<ll>
	#define     pii                 pair<ll,ll>
	#define 	vpair 				vector< pii >
	#define 	fast 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#define     repp(i,a,n)         for(ll i= a ; i < n ; ++i)
	#define     rep(i,n)            for(ll i= 0 ; i < n ; ++i)
	#define 	p_b		 			push_back
	#define 	p_f 				push_front
	#define 	pop_b 				pop_back()
	#define 	pop_f 				pop_front()
	#define 	m_p 				make_pair
	#define  	sumv(v)  			accumulate(v.begin(),v.end(),0);
	#define 	sortv(v) 			sort(v.begin(),v.end())
	#define 	sort_dec(v) 		sort(v.begin(),v.end(),greater<ll>() )
	#define 	l_b(v,l)   		    lower_bound (v.begin(), v.end(), l)
	#define 	u_b(v,l)   		    upper_bound (v.begin(), v.end(), l)
	#define 	pq 					priority_queue
	#define 	ff 					first
	#define 	ss 					second
	#define     len                 length()
	#define     all(v)              v.begin(),v.end()
    #define     mset(a,b)           memset(a,b,sizeof(a));

	///==========INPUT=============///
	#define     sc(a)           scanf("%lld",&a);
    #define     sc2(a,b)        scanf("%lld%lld",&a,&b);
    #define     sc3(a,b,c)      scanf("%lld%lld%lld",&a,&b,&c);
    #define     sc4(a,b,c,d)    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

    ///==========PRINTING=============///
    #define     prarr(arr)      rep(i,sizeof(arr)/sizeof(ll)) cout<<arr[i]<<" "; nl
    #define     prvec(v)        rep(i,v.size()) cout<<v[i]<<" "; nl
    #define     pr(x)           cout<<x<<"\n";
    #define     pr2(x, y)       cout<<x<<" "<<y<<"\n";
    #define     pr3(x, y, z)    cout<<x<<" "<<y<<" "<<z<<"\n";

    ///==========DEBUGGING=============///
    #define 	debug(a) 			cout<<"*"<<a<<endl;
    #define 	debug2(a,b) 		cout<<"$"<<a<<" "<<b<<endl;
    #define 	debug3(a,b,c) 		cout<<"$"<<a<<" "<<b<<" "<<c<<endl;
	#define 	bug 				cout<<"#"<<endl;
    #define 	nl 					cout<<'\n';
    #define     endl                '\n'

    ///==========CONSTANTS=============///
    #define     max6     1000005
    #define     max5     100004
    #define     max4     10003
    #define 	mod  	 1000000007
    #define     inf      1e15
    ll powermod(ll _a,ll _b,ll _m)	{ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}

    using namespace std;
    ll arr[max5];
    ll n;
    map<ll,ll> mp;
    ll factors(ll n,ll pos)
    {
        if(n!=1&&n<=pos)
        mp[n]+=mp[n-1];
        for(ll i=sqrt(n);i>=1;i--)
        {
            if(n%i==0&&i<=pos)
            {
                mp[i]+=mp[i-1];
            }
        }
        //debug(mp[2]);
    }
    int main()
    {
       sc(n)
       rep(i,n)
       sc(arr[i])
       mp[0]=1;
       rep(i,n)
       {
           factors(arr[i],i+1);
       }
       ll ans=-1;
       for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            ans+=itr->ss;
           //debug(itr->ss);
        }
        cout<<ans;
    }
