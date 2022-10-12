/**
 * 计算书费
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[10];
    while(n > 0) {
        for(int i = 0; i < 10; ++i) {
            cin >> a[i];
        }
        double sum = a[0] * 28.9 + a[1] * 32.7 + a[2] * 45.6 + a[3] * 78 + a[4] * 35 +
        a[5] * 86.2 + a[6] * 27.8 + a[7] * 43 + a[8] * 56 + a[9] * 65;
        cout << fixed <<setprecision(2) << sum << endl;
        --n;
    }
    return 0;
}