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
    if(n<11)
    cout<<"1"<<endl<<n<<endl;
    else{
    ll temp=0,s=log10(n)+1,original=n;
    vector<pair<ll int,ll int>> vec;
    for(int i=0;i<s;i++)
    {
        ll temp=n%10;
       // cout<<"temp"<<temp<<endl;
        if(n%10!=0)
        {
            vec.push_back(make_pair(temp,binpow(10,i)));
        }
        if(n<10)
        break;
        n=n/10;
      //  cout<<n<<" ";
    }   
  //  cout<<vec[0].first<<endl;    
    //cout<<endl<<"grdrg"<<vec.size()<<endl;
    if(vec.size()==1)
    cout<<"1"<<endl<<original<<endl;
    else
    {
        cout<<vec.size()<<endl;
        for(auto x:vec)
        {
            cout<<x.first*x.second<<" ";
        }
        cout<<endl;
    }    }                                                                                                                                       
}
return 0;
}