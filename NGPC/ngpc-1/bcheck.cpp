
#include<iostream>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define el                  cout<<endl
#define md                  1000000007
#define inf                 9e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define N 100006

int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,cn=0,ans=0,sum=0 ;
    cin>>n>>k;

    if(n<k)pno;
    else if(k==1){pys;cout<<n<<endl;}
    else if(n%2==0)
    {
        if(k%2==0)
        {
            pys;
            fr(i, k-1)cout<<1<<" " ;
            k--;
            cout<<n-k<<endl;
        }
        else
        {
            if(n/2 >=k)
            {
                ll baki=n- (k-1)*2;
                if(baki%2)pno;
                else
                {
                    pys;
                    fr(i, k-1)cout<<2<<" ";
                    pfl(baki);
                }
            }
            else
            {
                ll baki=n-(k-2);
                if(baki%2)pno;
                else
                {
                    pys;
                    fr(i, k-2)cout<<1<<" ";
                    cout<<baki/2<<" "<<baki/2<<endl;
                }
            }
        }
    }
    else
    {
        if(k==2 )pno;
        else
        {
            if(k%2)
            {
                pys;
                fr(i, k-1)cout<<1<<" " ;
                k--;
                cout<<n-k<<endl;
            }
            else
            {
                ll baki=n-(k-2);
                if(baki%2)pno;
                else
                {
                    pys;
                    fr(i, k-2)cout<<1<<" ";
                    cout<<baki/2<<" "<<baki/2<<endl;
                }
            }
        }
    }
    }

return 0;
}