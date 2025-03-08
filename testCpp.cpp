#include <bits/stdc++.h>     
using namespace std;
 
typedef long long                                        ll;
typedef pair <int, int>                                  pii;
typedef pair <ll, ll>                                    pll;
 
# define F                                               first
# define S                                               second
# define nl                                              "\n"
# define sep                                             " "
# define all(x)                                          x.begin(), x.end()
# define SZ(x)                                           int(x.size())
# define fast                                            ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
 
 
const int xn = 2e5 + 10;
const int xm = - 20 + 10;
 
int qq, n, m, a[xn], b[xn];
bool ans;
 
void check(int x){
	m = 0;
	for (int i = 1; i <= n; ++ i)
		if (a[i] != x)
			b[++ m] = a[i];
	for (int i = 1; i <= m; ++ i)
		if (b[i] != b[m + 1 - i])
			return;
	ans = true;
}
 
int main()
{
	cout << (int)log2(16);
	
}
		