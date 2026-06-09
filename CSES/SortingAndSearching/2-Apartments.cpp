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
  int n,m,k;
  cin >> n >> m >> k;
  vector <int> desired;
  vector <int> size;
  for(int i = 0; i < n; i++){
    int a;
    cin >> a;
    desired.push_back(a);
  }
  for(int i = 0; i < m; i++){
    int a;
    cin >> a;
    size.push_back(a);
  }

  int res = 0;
  sort(desired.begin(), desired.end());
  sort(size.begin(),size.end());
  int i = 0;
  int j = 0;
  while(i < n && j < m){
    if(size[j] < desired[i] - k) j++;
    else if(size[j] > desired[i] + k) i++;
    else res++, i++, j++;
  }
  cout << res << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
  int tc = 1;
  //cin >> tc;
  while(tc--) solve();
}
