#include <iostream>
using namespace std;
int main() {
  //培养皿的数量
  int n;
  //培养皿编号
  int id[100];
  //细菌的繁殖率
  double rate[100];
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int start, end;
    cin >> id[i] >> start >> end;
    rate[i] = (double )end / start;
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n -i -1; ++j) {
      if (rate[j+1] > rate[j]){
        int tmpId = id[j];
        id[j] = id[j+1];
        id[j+1] = tmpId;
        double tmpRate = rate[j];
        rate[j] = rate[j+1];
        rate[j+1] = tmpRate;
      }
    }
  }
  //记录最大的差
  double maxDiff = 0;
  //记录最大差的下标
  double maxDiffIndex = 0;
  for (int i = 0; i < n-1; ++i) {
    double diff = rate[i] - rate[i+1];
    if (maxDiff < diff) {
      maxDiff = diff;
      maxDiffIndex = i;
    }
  }
  //输出繁殖率较大的那组细菌
  cout << maxDiffIndex + 1 << endl;
  for (int i = maxDiffIndex; i >= 0 ; --i) {
    cout << id[i] << endl;
  }
  //输出繁殖率较小的那组细菌
  cout << n - maxDiffIndex -1 << endl;
  for (int i = n - 1; i >= maxDiffIndex + 1; i--) {
    cout << id[i] << endl;
  }
  return 0;
}
