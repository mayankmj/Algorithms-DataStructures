#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define array_input(n,arr) for(int i=0;i<n;i++) cin>>arr[i] 
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<endl
template <typename T> //cin for vector
istream &operator>>(istream &istream, vector<T> &v){
for(auto &it :v)
cin>>it;
return istream;
}
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

vector<ll>dp(1000000,0);
ll binpow(ll a, ll b) {
long long res = 1;
while (b > 0) {
if (b & 1)
res = res * a;
a = a * a;
b >>= 1;
}
return res;
}

ll solve(ll n)
{
    dp[0]=1,dp[1]=1;
    if(n==1 || n==0) return dp[n];
    for(int i=2;i<=n;i++)
    {
        for(int x=1;x<=6;x++)
        {
            if(x>i) break;
            dp[i]=(dp[i]+dp[i-x])%mod;
            //cout<<"gd"<<endl;
        }
    }
    return dp[n];
}
int32_t main(){
fast
    ll n;
    cin>>n;
    cout<<solve(n)<<endl;
    //final ans is vec[n]=> the total count of all the possibilities till n;
return 0;
}
