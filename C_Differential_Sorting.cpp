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
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<endl  
#define debug3(x,y,z) cout<<x<<endl<<y<<endl<<z<<endl 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


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
bool is_sorted(ll n,ll arr[])
{
    for(ll i=0;i<n-1;i++)
    {
        if(arr[i+1]<arr[i])
        return false;
    }
    return true;
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll arr[n],x[n],y[n],z[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(arr[n-2]>arr[n-1])
    cout<<"-1"<<endl;
    else if(is_sorted(n,arr)==true)
    cout<<"0"<<endl;
    else if(arr[n-1]<0)
    cout<<"-1"<<endl;
    else
    {
        cout<<n-2<<endl;
        for(int i=0;i<(n-2);i++)
        cout<<i+1<<" "<<n-1<<" "<<n<<endl;
    }
}
return 0;
}
