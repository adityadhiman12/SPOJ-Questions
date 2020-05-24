#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		ll res=1;
		while(b)
		{
			if(b%2==0)
			{
				a*=a;
				a%=10;
				b/=2;
			}
			else
			{
				res*=a;
				res%=10;
				b-=1;
			}
		}		
		int digit=res%10;	
		cout<<digit<<"\n";	
	}
}
