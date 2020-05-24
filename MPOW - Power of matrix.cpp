#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void mul(int a[][101],int b[][101],int n)
{
	int res[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			res[i][j]=0;
			for(int k=0;k<n;k++)
				res[i][j]+=(a[i][k]% 1000000007*b[k][j]% 1000000007)% 1000000007;
		}
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			a[i][j]=res[i][j];
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int pow;
		cin>>n;
		cin>>pow;
		int a[101][101];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				{
					cin>>a[i][j];
				}
		}
		int I[101][101];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j)
					I[i][j]=1;
				else
					I[i][j]=0;
			}
		}
		while(pow)
		{
			if(pow%2!=0)
			{
				mul(I,a,n);
				pow--;
			}
			else
			{
				mul(a,a,n);
				pow/=2;
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				a[i][j]=I[i][j];
				cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}
				
	}
}
