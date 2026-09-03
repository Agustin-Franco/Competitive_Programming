#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define DBG(x) cerr << #x << " = " << (x) << "\n"
#define DBGY(x) cerr << #x << " = " << (x) << " , "
#define RAYA cerr << "====================\n"
template <typename T> ostream &operator<<(ostream &os, const vector<T> &v) {
  os << "[";
  for (size_t i = 0; i < v.size(); ++i) {
    if (i > 0)
      os << ",";
    os << v[i];
  }
  return os << "]";
}
constexpr int MOD = 1e9 + 7;

void solve() {
  ll n;
  cin >> n;
  cout << n << " ";
  while(n != 1){
    if(n%2 == 0){
      n = n/2;
      cout << n << " ";
    }
    else{
      n = n*3+1;
      cout << n << " ";
    }
  }



}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
  int tc = 1;
  //cin >> tc;
  while(tc--) solve();
}
