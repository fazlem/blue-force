#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define nl "\n"


void fazle() 
{
    ll n; cin >> n;
    vector<ll> v(n+1);
    for ( int i = 1; i <= n; i++ ) cin >> v[i];

    int ans = 0;

    for ( ll i = 1; i <= n; i++ ) {

        for ( ll j = v[i]-i; j <= n; j += v[i] ) {
            if ( j > i ) {
                if ( v[i]*v[j] == i+j ) ans++;
            }
        }
    }

    cout << ans << nl;
    
}
 
int main() 
{
    fast;
    int T; cin >> T;
    while ( T-- )
    fazle();
}