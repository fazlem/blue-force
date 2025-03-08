#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define nl "\n"

int gcd ( int a , int b ) {
  if ( b == 0 ) return a;
  return gcd ( b,a%b );
}
void fazle()
{
  cout << gcd ( 12 , 18) << nl;
  cout << gcd ( 18 , 12 ) << nl;
  cout << gcd ( 11 , 100 ) << nl;
  cout << 12*18/gcd(12,18) << nl;
}
int main() 
{
  fast;
  fazle();
}