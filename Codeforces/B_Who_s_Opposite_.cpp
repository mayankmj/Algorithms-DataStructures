#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
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
#define array_print(n,arr) for(int i=0;i<n;i++) cout<<arr[i] 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int maxi=max(a,b)-min(a,b);
    maxi=maxi*2;
    if(c>maxi || a>maxi || b>maxi)
    cout<<"-1"<<endl;
    else if((max(a,b)-min(a,b))==1)
    cout<<"-1"<<endl;
    else
    {
        if((c+maxi/2)>maxi)
        cout<<c-maxi/2<<endl;
        else
        cout<<c+maxi/2<<endl;
    }
}
return 0;
}
