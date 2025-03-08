#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define nl "\n"

void fazle()
{
    int n; cin >> n;
    int a[n],b[n];
    for ( int i = 0; i < n; i++ ) cin >> a[i];
    for ( int i = 0; i < n; i++ ) cin >> b[i];
    int m[n];
    for ( int i = 0; i < n; i++ ) {
        m[i] = b[i] - a[i];
    }
    
    sort ( m,m+n );
    reverse ( m,m+n );
    int cnt = 0;
    int j = n-1;
    
    for ( int i = 0; i < n; i++ ) {
        while ( j > i && m[i]+m[j] < 0 ) j--;
        if ( j <= i ) break;
        j-- , cnt++;
    }
    cout << cnt << nl;
}

int main () {
    fast;
    int T; cin >> T;
    while ( T--)
    fazle();
}