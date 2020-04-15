
1082 B - Vova and Trophies.cpp GNU C++14 Wrong answer on test 5
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
    #define     prvec(v)        rep(ii,v.size()) cout<<v[ii]<<" "; nl
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
        ll n;
        string s;
        cin>>n>>s;
        ll i1=0,i2=0,f=0,f2=0,cnt=0;
        ll maxx=0,g=0;
        repp(i,0,n)
            if(s[i]=='G')
                g++;
        repp(i,0,n)
        {
            if(s[i]=='G' && f==0)
            {
                f=1;
                cnt++;
                i1=i;
                i2=i;
            }
            else if(s[i]=='G' && f==1)
            {
                cnt++;
                i2++;
            }
            else if(s[i]=='S' && f2==0 && cnt<g)
            {
                cnt++;
                f2=1;
                i1=i;
            }
            else
            {

                 maxx=max(maxx,cnt);
                 i2=i;
                 cnt=i2-i1-1;
                 if(cnt==0)
                    f=0;
                 f2=0;
            }
        }
        if(f2==0 && cnt<g)
            cnt++;
        maxx=max(maxx,cnt);
        maxx=min(maxx,g);
        cout<<maxx<<endl;
    }

1082 B - Vova and Trophies.cpp GNU C++14 Time limit exceeded on test 3
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
    #define     prvec(v)        rep(ii,v.size()) cout<<v[ii]<<" "; nl
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
        ll n;
        string s;
        cin>>n>>s;
        ll i1=0,i2=0,f=0,f2=0,cnt=0;
        ll maxx=0,g=0;
        repp(i,0,n)
            if(s[i]=='G')
                g++;
        repp(i,0,n)
        {
            if(s[i]=='G' && f==0)
            {
                f=1;
                cnt++;
                i1=i;
                i2=i;
            }
            else if(s[i]=='G' && f==1)
            {
                cnt++;
                i2++;
            }
            else if(s[i]=='S' && f2==0 && cnt<g)
            {
                cnt++;
                f2=1;
                i1=i;
            }
            else
            {

                 maxx=max(maxx,cnt);
                 i2=i;
                 cnt=i2-i1-1;
                 if(cnt==0)
                    f=0;
                 f2=0;
                 i--;
            }
        }
        if(f2==0 && cnt<g)
            cnt++;
        maxx=max(maxx,cnt);
        maxx=min(maxx,g);
        cout<<maxx<<endl;
    }

1082 B - Vova and Trophies.cpp GNU C++14 Accepted
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
       ll n;
       sc(n)
       string s;
       cin>>s;
       ll cs=0,g=0;
       rep(i,n)
       {
           if(s[i]=='G')
            g++;
       }
       ll prev=0,cur=0,c2=0,maxx=0,maxxc2=0;
       rep(i,n)
       {
           if(s[i]=='G')
           {
               if(cs==1)
               {
                   cur=prev;
                   cur++;
                   c2++;
               }
               else
               {
                   cur++;
                   c2++;
               }
               cs=0;
           }
           else
           {
               cs++;
               maxx=max(cur,maxx);
                //maxxc2=max(maxxc2,c2);
                prev=c2;
                c2=0;
               if(cs>1)
               cur=0;


           }
       }
        maxx=max(cur,maxx);
       // maxxc2=max(maxxc2,c2);
       if(g>maxx)
            pr(maxx+1)

        else
        pr(maxx)
    }

1082 B - Vova and Trophies.cpp GNU C++14 Wrong answer on test 4
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
       ll n;
       sc(n)
       string s;
       cin>>s;
       ll cs=0,g=0;
       rep(i,n)
       {
           if(s[i]=='G')
            g++;
       }
       ll prev=0,cur=0,c2=0,maxx=0,maxxc2=0;
       rep(i,n)
       {
           if(s[i]=='G')
           {
               if(cs==1)
               {
                   cur=prev;
                   cur++;
                   c2++;
               }
               else
               {
                   cur++;
                   c2++;
               }
               cs=0;
           }
           else
           {
               cs++;
               maxx=max(cur,maxx);
                maxxc2=max(maxxc2,c2);
                prev=c2;
                c2=0;
               if(cs>1)
               cur=0;


           }
       }
        maxx=max(cur,maxx);
        maxxc2=max(maxxc2,c2);
       if(g>maxx)
            pr(maxx+1)

        else
        pr(maxxc2)
    }
