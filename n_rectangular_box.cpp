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
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<
  
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<y<<endl  
#define debug3(x,y,z) cout<<x<<y<<z<<endl 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
    int n;
    cin>>n;
    vector<pair<int,int>> ve(n);
    for(int i=0;i<n;i++)
    {
        cin>>ve[i].first>>ve[i].second;
    }
    int f=false;
    for(int i=0;i<n-1;i++)
    {
        if(ve[i].first<ve[i+1].first){
        if(ve[i].second>=ve[i+1].first)
        {
            swap(ve[i].first,ve[i].second);
        }
        else if(ve[i+1].second<=ve[i].first)
        {
            swap(ve[i+1].first , ve[i+1].second);
        }
        else if(ve[i].second>=ve[i+1].second)
        {
            swap(ve[i].first,ve[i].second);
            swap(ve[i+1].first,ve[i+1].second);
        }
        else
        {
            f=true;
            break;
        }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(ve[i].first<ve[i+1].first)
        {
            f=true;
            break;
        }
    }
    if(f)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
return 0;
}