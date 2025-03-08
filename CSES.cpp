#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define nl "\n"
 
void fazle() 
{
    int n; cin >> n;
    ll a[n];
    for ( int i = 0; i < n; i++ ) cin >> a[i];

    ll cnt[1000001] = {};

    for ( int i = 0; i < n; i++ ) cnt[a[i]]++;

    for ( int i = 1000000; i >= 1; i--) {
        ll mul = 0;
        for ( int j = i; j <= 1000000; j += i ) {
            mul += cnt[j];
        }
        if ( mul >= 2 ) {
            cout << i;
            break;
        } 
    }
       
}
 
int main() 
{
    fast;
    // int T; cin >> T;
    // while ( T-- )
    fazle();
}