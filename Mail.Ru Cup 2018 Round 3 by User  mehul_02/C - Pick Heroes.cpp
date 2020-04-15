
1056 C - Pick Heroes.cpp GNU C++14 Idleness limit exceeded on test 1
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

    int main()
    {
        ll n,m;
        sc2(n,m)
        ll a,b;
        multiset<ll> s;
        rep(i,2*n)
        {
            sc(a)
            s.insert(a);
        }
        vector<pair<ll,pii > > v;

        rep(i,m)
        {
            sc2(a,b);
            auto itr=lower_bound(s.begin(),s.end(),a);
            s.erase(itr);
            itr=lower_bound(s.begin(),s.end(),b);
            s.erase(itr);
            if(b<a)
                swap(a,b);
                ll c=b-a;
            pii p=m_p(a,b);
            v.p_b(m_p(c,p));
        }
        sortv(v);
        sc(a)
        ll flag=0;
        ll d=-1;
        if(a==1)
        {
        while(n--)
        {
            if(d!=-1&&flag==0)
            {
                auto itr=s.end();
                itr--;
                if(*itr==d)
                    s.erase(itr);
                else
                {
                    for(ll k=v.size()-1;k>=0;k--)
                    {
                        if(v[k].ss.ss==d)
                        {
                            cout<<v[k].ss.ff;
                        }
                    }
                }
            }
            if(flag==1)
                flag=0;
            if(s.size()>1&&v.size()>0)
            {
                ll ds=v.size();
                auto itr=s.end();
                itr--;
                ll diff=*itr;
                ll temp=diff;
                itr--;
                diff-=*itr;
                itr++;
                if(v[ds-1].ff>diff)
                {
                    cout<<v[ds-1].ss.ss;
                    flag=1;
                    v.erase(v.begin()+ds-1);
                }
                else
                {
                    cout<<temp;
                    s.erase(itr);
                }
            }
            else if(v.size()==0)
            {
                auto itr=s.end();
                itr--;
                ll diff=*itr;
                ll temp=diff;
                cout<<temp;
                    s.erase(itr);
            }
            else {
                    ll ds=v.size();
                    cout<<v[ds-1].ss.ss;
                    flag=1;
                    v.erase(v.begin()+ds-1);
            }
            cin>>d;
            //nl
            cout.flush();
            //fflush(stdout);
        }
    }
        else
        {while(n--)
        {
            cin>>d;
            cout.flush();
            if(d!=-1&&flag==0)
            {
                auto itr=s.end();
                itr--;
                if(*itr==d)
                    s.erase(itr);
                else
                {
                    for(ll k=v.size()-1;k>=0;k--)
                    {
                        if(v[k].ss.ss==d)
                        {
                            cout<<v[k].ss.ff;

                        }
                    }
                }
            }
            if(flag==1)
                flag=0;
            if(s.size()>1&&v.size()>0)
            {
                ll ds=v.size();
                auto itr=s.end();
                itr--;
                ll diff=*itr;
                ll temp=diff;
                itr--;
                diff-=*itr;
                itr++;
                if(v[ds-1].ff>diff)
                {
                    cout<<v[ds-1].ss.ss;
                    flag=1;
                    v.erase(v.begin()+ds-1);
                }
                else
                {
                    cout<<temp;
                    s.erase(itr);
                }
            }
            else if(v.size()==0)
            {
                auto itr=s.end();
                itr--;
                ll diff=*itr;
                ll temp=diff;
                cout<<temp;
                    s.erase(itr);
            }
            else {
                    ll ds=v.size();
                    cout<<v[ds-1].ss.ss;
                    flag=1;
                    v.erase(v.begin()+ds-1);
            }
            //nl
        }
        }

    }

1056 C - Pick Heroes.cpp GNU C++14 Idleness limit exceeded on pretest 1
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

    int main()
    {
        ll n,m;
        sc2(n,m)
        ll a,b;
        multiset<ll> s;
        rep(i,2*n)
        {
            sc(a)
            s.insert(a);
        }
        vector<pair<ll,pii > > v;

        rep(i,m)
        {
            sc2(a,b);
            auto itr=lower_bound(s.begin(),s.end(),a);
            s.erase(itr);
            itr=lower_bound(s.begin(),s.end(),b);
            s.erase(itr);
            if(b<a)
                swap(a,b);
                ll c=b-a;
            pii p=m_p(a,b);
            v.p_b(m_p(c,p));
        }
        sortv(v);
        sc(a)
        ll flag=0;
        ll d=-1;
        if(a==1)
        {
        while(cin>>d)
        {
            if(d!=-1&&flag==0)
            {
                auto itr=s.end();
                itr--;
                if(*itr==d)
                    s.erase(itr);
                else
                {
                    for(ll k=v.size()-1;k>=0;k--)
                    {
                        if(v[k].ss.ss==d)
                        {
                            cout<<v[k].ss.ff;
                        }
                    }
                }
            }
            if(flag==1)
                flag=0;
            if(s.size()>1&&v.size()>0)
            {
                ll ds=v.size();
                auto itr=s.end();
                itr--;
                ll diff=*itr;
                ll temp=diff;
                itr--;
                diff-=*itr;
                itr++;
                if(v[ds-1].ff>diff)
                {
                    cout<<v[ds-1].ss.ss;
                    flag=1;
                    v.erase(v.begin()+ds-1);
                }
                else
                {
                    cout<<temp;
                    s.erase(itr);
                }
            }
            else if(v.size()==0)
            {
                auto itr=s.end();
                itr--;
                ll diff=*itr;
                ll temp=diff;
                cout<<temp;
                    s.erase(itr);
            }
            else {
                    ll ds=v.size();
                    cout<<v[ds-1].ss.ss;
                    flag=1;
                    v.erase(v.begin()+ds-1);
            }
            //cin>>d;
            cout.flush();
            //fflush(stdout);
        }
    }
        else
        {while(cin>>d)
        {
            //cin>>d;
            cout.flush();
            if(d!=-1&&flag==0)
            {
                auto itr=s.end();
                itr--;
                if(*itr==d)
                    s.erase(itr);
                else
                {
                    for(ll k=v.size()-1;k>=0;k--)
                    {
                        if(v[k].ss.ss==d)
                        {
                            cout<<v[k].ss.ff;
                        }
                    }
                }
            }
            if(flag==1)
                flag=0;
            if(s.size()>1&&v.size()>0)
            {
                ll ds=v.size();
                auto itr=s.end();
                itr--;
                ll diff=*itr;
                ll temp=diff;
                itr--;
                diff-=*itr;
                itr++;
                if(v[ds-1].ff>diff)
                {
                    cout<<v[ds-1].ss.ss;
                    flag=1;
                    v.erase(v.begin()+ds-1);
                }
                else
                {
                    cout<<temp;
                    s.erase(itr);
                }
            }
            else if(v.size()==0)
            {
                auto itr=s.end();
                itr--;
                ll diff=*itr;
                ll temp=diff;
                cout<<temp;
                    s.erase(itr);
            }
            else {
                    ll ds=v.size();
                    cout<<v[ds-1].ss.ss;
                    flag=1;
                    v.erase(v.begin()+ds-1);
            }

        }
        }

    }

1056 C - Pick Heroes.cpp GNU C++14 Idleness limit exceeded on pretest 1
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

    int main()
    {
        ll n,m;
        sc2(n,m)
        ll a,b;
        multiset<ll> s;
        rep(i,2*n)
        {
            sc(a)
            s.insert(a);
        }
        vector<pair<ll,pii > > v;

        rep(i,m)
        {
            sc2(a,b);
            auto itr=lower_bound(s.begin(),s.end(),a);
            s.erase(itr);
            itr=lower_bound(s.begin(),s.end(),b);
            s.erase(itr);
            if(b<a)
                swap(a,b);
                ll c=b-a;
            pii p=m_p(a,b);
            v.p_b(m_p(c,p));
        }
        sortv(v);
        sc(a)
        ll flag=0;
        ll d=-1;
        if(a==1)
        {
        while(1)
        {
            if(d!=-1&&flag==0)
            {
                auto itr=s.end();
                itr--;
                if(*itr==d)
                    s.erase(itr);
                else
                {
                    for(ll k=v.size()-1;k>=0;k--)
                    {
                        if(v[k].ss.ss==d)
                        {
                            cout<<v[k].ss.ff;
                        }
                    }
                }
            }
            if(flag==1)
                flag=0;
            if(s.size()>1&&v.size()>0)
            {
                ll ds=v.size();
                auto itr=s.end();
                itr--;
                ll diff=*itr;
                ll temp=diff;
                itr--;
                diff-=*itr;
                itr++;
                if(v[ds-1].ff>diff)
                {
                    cout<<v[ds-1].ss.ss;
                    flag=1;
                    v.erase(v.begin()+ds-1);
                }
                else
                {
                    cout<<temp;
                    s.erase(itr);
                }
            }
            else if(v.size()==0)
            {
                auto itr=s.end();
                itr--;
                ll diff=*itr;
                ll temp=diff;
                cout<<temp;
                    s.erase(itr);
            }
            else {
                    ll ds=v.size();
                    cout<<v[ds-1].ss.ss;
                    flag=1;
                    v.erase(v.begin()+ds-1);
            }
            cin>>d;
            cout.flush();
            //fflush(stdout);
        }
    }
        else
        {while(cin>>d)
        {
            //cin>>d;
            cout.flush();
            if(d!=-1&&flag==0)
            {
                auto itr=s.end();
                itr--;
                if(*itr==d)
                    s.erase(itr);
                else
                {
                    for(ll k=v.size()-1;k>=0;k--)
                    {
                        if(v[k].ss.ss==d)
                        {
                            cout<<v[k].ss.ff;
                        }
                    }
                }
            }
            if(flag==1)
                flag=0;
            if(s.size()>1&&v.size()>0)
            {
                ll ds=v.size();
                auto itr=s.end();
                itr--;
                ll diff=*itr;
                ll temp=diff;
                itr--;
                diff-=*itr;
                itr++;
                if(v[ds-1].ff>diff)
                {
                    cout<<v[ds-1].ss.ss;
                    flag=1;
                    v.erase(v.begin()+ds-1);
                }
                else
                {
                    cout<<temp;
                    s.erase(itr);
                }
            }
            else if(v.size()==0)
            {
                auto itr=s.end();
                itr--;
                ll diff=*itr;
                ll temp=diff;
                cout<<temp;
                    s.erase(itr);
            }
            else {
                    ll ds=v.size();
                    cout<<v[ds-1].ss.ss;
                    flag=1;
                    v.erase(v.begin()+ds-1);
            }

        }
        }

    }
