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


int32_t main(){
fast
    int n,m;
    cin>>n>>m;
    string arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int marks[m];
    int a=0,b=0,c=0,d=0,e=0;
    for(int i=0;i<m;i++)
    {
        cin>>marks[i];
    }
    for(int i=0;i<m;i++)
    {
       // cout<<"g"<<endl;
        a=0,b=0,c=0,d=0,e=0;
        for(int j=0;j<n;j++){
        
        if(arr[j][i]=='A')
        a++;
        else if(arr[j][i]=='B')
        b++;
        else if(arr[j][i]=='C')
        c++;
        else if(arr[j][i]=='D')
        d++;
        else 
        e++;
       }
      // debug3(a,b,c);
      // cout<<a<<endl;
       sum=sum+marks[i]*(max(a,max(b,max(c,max(d,e)))));
    }
    cout<<sum<<endl;
return 0;
}