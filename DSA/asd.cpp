#include<bits/stdc++.h>
using namespace std;
#define MOD1 1000000007
#define MOD 998244353
#define inf 1e9
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rep(i,a,b)    for(int i{a};i<b;i++);







void ans() {
    long long ll;
    unsigned long long ull;
    long double lld;
    int n , k ;
    cin >> n >> k ;
    string s ;
    cin >> s ;
    vector <ll> pz(n) , po(n) , pi(n) ;
    vector <int> o , z ;
    for(int i = 0 ; i < n ; i ++){
      if(s[i] == '1'){
        o.push_back(i) ;
        po[i] ++ ;
      }else{
        z.push_back(i) ;
        pz[i] ++ ;
        pi[i] += sz(o) ;
      }
      if(i > 0){
        po[i] += po[i - 1] ;
        pz[i] += pz[i - 1] ;
        pi[i] += pi[i - 1] ;
      }
    }
    if(sz(o) <= k || sz(z) <= k){
      cout << 0 << nline ;
      return ;
    }
    ll ans = 1e18 ;
    for(ll j = 0 ; j <= k ; j ++){
      ll l = -1 , r = n ;
      if(j) l = o[j - 1] ;
      if(j < k) r = z[sz(z) - (k - j)] ;
      if(l >= r){
        ans = 0 ;
        break ;
      }
      ll cal = pi[r - 1] ;
      if(l >= 0) cal -= pi[l] ;
      ll cnt0 = pz[r - 1] ;
      ll cnt1 = 0 ;
      if(l >= 0){
        cnt1 += po[l] ;
        cnt0 -= pz[l] ;
      }
      cal -= cnt1 * cnt0 ;
      ans = min(ans , cal) ;
    }
    cout << ans << nline ;
}




int main() {
ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t{1};
    cin >> t;
    while (t--) {
        ans();
    }

}