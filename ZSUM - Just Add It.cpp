#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll modexpo(ll a,ll b,int n)
{
    ll res=1;
    while(b)
    {
        if(b%2)
        {
            res=(res*a)%n;
        }
        b>>=1;
        a=(a*a)%n;
    }
    return res;
}
int main()
{
    ll n,k;
    cin>>n>>k;
    while(n)
    {
        ll a,b,c,d,ans;
        b=modexpo(n,k,10000007);
        a=(2*modexpo(n-1,k,10000007))%10000007;
        d=modexpo(n,n,10000007);
        c=(2*modexpo(n-1,n-1,10000007))%10000007;
        ans=((a+b)%10000007+(c+d)%10000007)%10000007;
        cout<<ans<<"\n";
        cin>>n>>k;
    }
    return 0;
}
