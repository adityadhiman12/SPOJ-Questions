#include<bits/stdc++.h>
#define ll long long int 
#define n 1000007
using namespace std;

int pw[n], pr[n];
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < 11; i ++)
        pw[i] = 1;
    for(int i = 10; i < n; i ++)
        pw[i] = pw[i / 10] * 10;
    pr[1] = 1;
    for(int i = 2; i < n; i ++)
        if(!pr[i]){
            for(int j = i + i; j < n; j += i)
                pr[j] = 1;
        }
    for(int i = 10; i < n; i ++)
        if(!pr[i] && (pr[i % pw[i]] || (i % pw[i] < pw[i / 10])))
            pr[i] = 1;
    for(int i = 1; i < n; i ++)
        pr[i] = !pr[i] + pr[i - 1];
	int t;
	cin>>t;
	while(t--)
	{
		int l;
		cin>>l;
		cout<<pr[l]<<"\n";
	}
}
