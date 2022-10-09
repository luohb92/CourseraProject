#include <iostream>
using namespace std;
int main() {
  int n, x, y;
  cin >> n >> x >> y;
  int res = 0;
  if (y % x != 0) {
    res = n - y / x  - 1;
  } else {
    res = n - y / x;
  }
  cout << res << endl;
  return 0;
}
