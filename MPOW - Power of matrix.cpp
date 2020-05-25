#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
int add(int a , int b){
    return (a % mod + b % mod) % mod;
}
int mull(int a , int b){
    return ((a % mod) * (b % mod)) % mod;
}

void mul(int a[][51],int b[][51],int n)
{
    int res[51][51] = {};
    memset(res , 0 , sizeof res);
        
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            res[i][j]=0;
            for(int k=0;k<n;k++)
                res[i][j] = add(res[i][j] , mull(a[i][k] , b[k][j]));
        }
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            a[i][j]=res[i][j];
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int pow;
        cin>>n;
        cin>>pow;
        int a[51][51] ={};
        memset(a , 0 , sizeof a);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                {
                    cin>>a[i][j];
                }
        }
        int I[51][51];

        memset(I , 0 , sizeof I);
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
            }
            
                mul(a,a,n);
                pow/=2;
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
