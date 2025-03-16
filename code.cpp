#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fl(i, start, end) for(ll i = start; i < end; i++)
# define flr(i, start, end) for(ll i = end - 1; i >= start; i--)
# define vll vector<ll>
# define vs vector<char>
# define vvll vector<vector<ll>>
# define iv(a) fl(i, 0, a.size()) cin >> a[i] // input vector
# define pv(a) fl(i, 0, a.size()) cout << a[i] << " " // print vector
# define sv(a) sort(a.begin(), a.end())
int mod = (int) 1e9 + 7;

void solve(){
    long long n;
    cin >> n;
    vll b(2 * n);
    iv(b);
    sv(b);

    long long fs = 0, ls = 0;
    flr(i, 0, n) fs += b[i];
    flr(i, n, 2 * n) ls += b[i];

    if(ls - fs > b[n * n - 1])
}

int main(){
    long long tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}