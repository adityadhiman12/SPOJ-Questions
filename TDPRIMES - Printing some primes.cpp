#include<bits/stdc++.h>
#define ll long long int 
#define n 100000025
using namespace std;

void sieve()
{
	vector<bool>isPrime(n,1);
	isPrime[0]=isPrime[1]=0;
	for(ll i=2;i*i<n;i++)
	{
		if(isPrime[i])
		{
			for(ll j=i*i;j<n;j+=i)
				isPrime[j]=0;
		}
	}
	int ptr=100;
	for(ll i = 2; i < n; i++){
			if(isPrime[i]){
				if(ptr == 100){
					cout<<i<<"\n";
					ptr = 1;
				}
				else ptr ++;
			}
		}
}

int main()
{
	sieve();
}
