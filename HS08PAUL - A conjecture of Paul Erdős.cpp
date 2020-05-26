#include<bits/stdc++.h>
using namespace std;
const int n = 10000025;

int p[n], sq[n], sum[n];


int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 2; i < n; i ++)
        if(!p[i])
            for(int j = i + i; j < n; j += i)
                p[j] = 1;
    for(int i = 1; i * i < n; i ++)
        sq[i * i] = 1;
    for(int i = 1; i < n; i ++){
        sum[i] = sum[i - 1];
        if(p[i])
            continue;
        for(int j = 1; j * j * j * j <= i; j ++){
            if(sq[i - j * j * j * j]){
                sum[i] ++;
                break;
            }
        }
    }
	int t;
	cin>>t;
	while(t--)
	{
		int l;
		cin>>l;
		cout<<sum[l]<<"\n";
	}
	
}
