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
    ll n,k;
    cin>>n>>k;
    vector<ll>like,d_like,v;
    for(int i=0;i<n;i++)
    {
        ll tmp;
        cin>>tmp;
        like.pb(tmp);
    }
    for(int i=0;i<n;i++)
    {
        ll tmp;
        cin>>tmp;
        d_like.pb(tmp);
    }
    ll a=*max_element(like.begin(),like.end()),size=0;
    for(int i=0;i<n;i++)
    {
        if(a==like[i]){
        v.pb(i+1);size++;
        }
    }
    ll flag=0;
    for(int i=0;i<size;i++)
    {
        ll ser=v[i];
         auto it =find (d_like.begin(),d_like.end(), ser);
         if(it!=d_like.end())
         {
             flag=1;
             cout<<"Yes"<<endl;
             break;
         }
    }
    if(flag==0)
    cout<<"No"<<endl;
return 0;
}