#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
  for(int i = 0; i < n; ++i) {
    if(a[i] <= 18) {
      ++num1;
    } else if (a[i] >= 19 && a[i] <= 35) {
      ++num2;
    } else if (a[i] >= 36 && a[i] <= 60){
      ++num3;
    } else if (a[i] > 60){
      ++num4;
    }
  }
  double res1 = (double)num1/n * 100;
  double res2 = (double)num2/n * 100;
  double res3 = (double)num3/n * 100;
  double res4 = (double)num4/n * 100;
  cout << "1-18: " << fixed << setprecision(2) << res1 << "%" << endl;
  cout << "19-35: " << fixed << setprecision(2) << res2 << "%" << endl;
  cout << "36-60: " << fixed << setprecision(2) << res3 << "%" << endl;
  cout << "60-: " << fixed << setprecision(2) << res4 << "%" << endl;
  return 0;
}
