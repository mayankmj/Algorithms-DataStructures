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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
  /*  for(int i=k;i>0;i--)
    {
        reverse(s.begin(),s.end()-(n-i));
      //  cout<<s<<endl;
    }*/
    if(k%2==0){
        cout<<s[(k/2)];
    for(int i=(k/2)-1;i>0;i--)
    {
        cout<<s[i]<<s[k-i];
    }
    cout<<s[0];
    for(int i=k;i<n;i++){
    cout<<s[i];
    }
    cout<<endl;
    }
    else
    {
        cout<<s[k/2];
        for(int i=k/2-1;i>=0;i--)
        {
            cout<<s[k-i-1]<<s[i];
        }
       // cout<<s[0];
        for(int i=k;i<n;i++){
        cout<<s[i];
    }
    cout<<endl;
    }
}
return 0;
}
