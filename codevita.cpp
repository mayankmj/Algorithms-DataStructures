#include <bits/stdc++.h>
#include <stdio.h>
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
int main()
{
    long n;
    scanf("%ld", &n);
    long a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &a[i]);
    }
    long iron_man = 0, captian_america = 0;
    for (int i = 0; i <= n / 2; i++)
    {
        if (a[i] > a[n - 1 - i])
        {
            if(i%2 == 0)
            {
                iron_man += a[i];
                captian_america += a[n - 1 - i];
                
            }
            else{
                iron_man += a[n - 1 - i];
                captian_america += a[i];
            }
        }
        else
        {
            if(i%2 == 0)
            {
                iron_man += a[n - 1 - i];
                captian_america += a[i];
            }
            else{
                iron_man += a[i];
                captian_america += a[n - 1 - i];
            }
            
        }
    }
    int d =iron_man - captian_america;
    d<0?printf("%d",d*-1):printf("%d",d);
}