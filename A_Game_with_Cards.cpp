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
int32_t main(){
fast
ll t=1;
cin>>t;
ll count=2;
while(t--){
      ll n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll m;cin>>m;
    vector<ll>b(m);
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end(),greater<int>());
    for(int i=0;i<count;i++){
    ll flag=0;
    if(a[0]>b[0]) cout<<"Alice"<<endl;
    else if(b[0]>a[0]) cout<<"Bob"<<endl;
    else {
        if(i%2==0) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    }
    count=2;
}
return 0;
}
