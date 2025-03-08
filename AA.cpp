#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define nl "\n"


void fazle() 
{
    int n; cin >> n;
    int a[n];
    for ( int i = 0; i < n; i++ ) cin >> a[i];

    if ( n & 1 ) {
        cout << 4 << nl;
        cout << 1 << ' ' << n-1 << nl;
        cout << 1 << ' ' << n-1 << nl;
        cout << n-1 << ' ' << n << nl;
        cout << n-1 << ' ' << n << nl;
    }
    else {
        cout << 2 << nl;
        cout << 1 << ' ' << n << nl;
        cout << 1 << ' ' << n << nl;
    }
}
 
int main() 
{
    fast;
    int T; cin >> T;
    while ( T-- )
    fazle();
}