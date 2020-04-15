
1062 C - Banh-mi.cpp GNU C++14 Accepted
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
        #define     max5     1000004
        #define     max4     100003
        #define 	mod  	 1000000007
        #define     inf      1e15
        ll powermod(ll _a,ll _b,ll _m)	{ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}

        using namespace std;

        int main()
        {
           ll n,q;
           sc2(n,q)
           string s;
           cin>>s;
           ll pre[n+1];
           pre[0]=0;
           rep(i,n)
           {
               if(s[i]=='1')
               {
                   pre[i+1]=1+pre[i];
               }
               else
                pre[i+1]=pre[i];
           }
           ll a,b;
           while(q--)
           {
               sc2(a,b)
               ll sum=pre[b]-pre[a-1];
               ll m=b-a+1;
               ll ans=powermod(2,m,mod);
               //debug(ans)
               ans=(ans-1+mod)%mod; //ans--;
               ll c=m-sum;
               //debug(c)
               ll sub=powermod(2,c,mod);
               //debug(sub)
               sub=(sub+mod-1)%mod;
               ans=(ans-sub+mod)%mod;
               pr(ans)
           }
        }
