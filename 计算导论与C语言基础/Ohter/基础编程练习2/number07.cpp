/**
 * 整数的个数
*/
#include <iostream>
using namespace std;
int main() {
  int k;
  cin >> k;
  int m[k];
  for (int i = 0; i < k; ++i) {
    cin >> m[i];
  }
  int oneNum = 0, fiveNum = 0, tenNum = 0;
  for (int i = 0; i < k; ++i) {
    if (m[i] == 1) {
      ++oneNum;
    } else if (m[i] == 5) {
      ++fiveNum;
    } else if (m[i] == 10) {
      ++tenNum;
    }
  }
  cout << oneNum << endl;
  cout << fiveNum << endl;
  cout << tenNum << endl;
  return 0;
}
