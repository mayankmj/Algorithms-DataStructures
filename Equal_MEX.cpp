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
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    n=n*2;
    vector<int>vec;
    ll temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
        ll flag=0,c=0;
        map<int,int>mayank;
        for(int i=0;i<n;i++)
        {
            mayank[vec[i]]++;
        }
        ll i=0;
        for(auto x:mayank)
        {
           
            if(x.first!=i)
            {
                c=1;
                break;
            }
            i++;
             if(x.second<2)
            {
                flag=1;
                break;
            }
         //   cout<<i<<x.first<<endl;
        }
        if(flag==0 || c==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
}
return 0;
}
