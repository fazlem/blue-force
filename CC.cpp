#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define nl "\n"


void fazle() 
{
    int n; cin >> n;
    string s; cin >> s;
    int ans = n+1;

    for ( int i = 0; i < 26; i++ ) {
        int l = 0 , r = n-1, cnt = 0;

        while ( l <= r ) {
            if ( s[l] == s[r] ) l++ , r--;

            else if ( s[l] == char('a'+i) ) l++ , cnt++;

            else if ( s[r] == char('a'+i) ) r-- , cnt++;

            else {
                cnt = n+1;
                break;
            }
        }
        ans = min ( ans, cnt );
    }
    if ( ans == n+1 ) ans = -1;
    cout << ans << nl;

}
 
int main() 
{
    fast;
    int T; cin >> T;
    while ( T-- )
    fazle();
}