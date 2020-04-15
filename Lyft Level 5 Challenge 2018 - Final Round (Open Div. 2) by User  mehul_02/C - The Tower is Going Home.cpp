
1075 C - The Tower is Going Home.cpp GNU C++14 Accepted
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
	#define     m_pp(a,b,c)         m_p(a,m_p(b,c))
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
        ll n,m,a,b,c;
        sc2(n,m)
        map<ll,ll> enter,exit;
        rep(i,n)
        {
            sc(a)
            enter[a]++;
            exit[1e9]++;
        }
        rep(i,m)
        {
            sc3(a,b,c)
            if(a==1)
            {
                enter[a-1]++;
                exit[b]++;
            }
        }
        if(enter.find(0)==enter.end()||exit.find(1e9)==exit.end())
            cout<<"0";
        else
        {
            auto itr=enter.begin(),itr2=exit.begin();
            ll c=0,ans=itr->ss;
            ll f=1;
            //debug(itr2->ff)
            while(itr!=enter.end())
            {

                //debug3(c,itr->ff,itr2->ff)

                while(itr->ff>itr2->ff)
                {
                    //bug
                    c-=itr2->ss;
                    itr2++;
                }
                if(f==1)
                f--;
                else
                ans=min(c,ans);
                c+=itr->ss;
                itr++;
            }
            while(1e9>itr2->ff)
                {
                    //bug
                    c-=itr2->ss;
                    itr2++;
                }
                ans=min(c,ans);
            cout<<(ans);
        }
	}


1075 C - The Tower is Going Home.cpp GNU C++14 Wrong answer on pretest 12
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
	#define     m_pp(a,b,c)         m_p(a,m_p(b,c))
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
        ll n,m,a,b,c;
        sc2(n,m)
        map<ll,ll> enter,exit;
        rep(i,n)
        {
            sc(a)
            enter[a]++;
            exit[1e9]++;
        }
        rep(i,m)
        {
            sc3(a,b,c)
            enter[a-1]++;
            exit[b]++;
        }
        if(enter.find(0)==enter.end()||exit.find(1e9)==exit.end())
            cout<<"0";
        else
        {
            auto itr=enter.begin(),itr2=exit.begin();
            ll c=0,ans=itr->ss;
            ll f=1;
            //debug(itr2->ff)
            while(itr!=enter.end())
            {

                //debug3(c,itr->ff,itr2->ff)

                while(itr->ff>itr2->ff)
                {
                    //bug
                    c-=itr2->ss;
                    itr2++;
                }
                if(f==1)
                f--;
                else
                ans=min(c,ans);
                c+=itr->ss;
                itr++;
            }
            while(1e9>itr2->ff)
                {
                    //bug
                    c-=itr2->ss;
                    itr2++;
                }
                ans=min(c,ans);
            cout<<(ans);
        }
	}

