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
#define debug1(x) cout<<x<<endl;
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
while(t--){
    ll n,m;
    cin>>n>>m;
    ll arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>arr[i][j];
    }
    ll flag=0,count=0;
    vector<ll>vec;
    for(int i=0;i<m;i++)
    {
        ll sorted[n];
        for(int j=0;j<n;j++)
        sorted[j]=arr[i][j];
        sort(sorted,sorted+n);
        for(int j=0;j<n;j++)
        {
            if(sorted[j]!=arr[i][j]){
            flag++;
            vec.pb(j);
            count++;
            }
        }      
        if(flag>2)
        break;
        flag=0;
    }
    if(flag>2) cout<<"-1"<<endl;
    else if(count==0)
    cout<<"1 1"<<endl;
    else
    {
        map<ll,ll>mp;
        for(int i=0;i<count;i++)
        {
            mp[vec[i]]++;
        }
        if(mp.size()>2)
        cout<<"-1"<<endl;
        else cout<<mp[1]<<" "<<mp[2]<<endl;
    }
}
return 0;
}
