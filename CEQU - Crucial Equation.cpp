#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

ll gcd(ll a, ll b) 
{ 
    return (a%b == 0)? (b) : gcd(b,a%b); 
} 

bool isPossible(ll a, ll b, ll c) 
{ 
    return (c%gcd(abs(a),abs(b)) == 0); 
} 
  
int main()
{
	ll t;
	cin>>t;
	for(ll i=1;i<=t;i++)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		if(isPossible(a,b,c))
			cout<<"Case "<<i<<": Yes"<<"\n";
		else
			cout<<"Case "<<i<<": No"<<"\n";				
	}
}
