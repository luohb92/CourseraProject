/**
 * 求平均年龄
*/
#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    double sum;
    for(int i = 0; i < n; ++i){
        int age;
        cin >> age;
        sum += age;
    }
    cout << fixed << setprecision(2) << sum / n << endl;
    return 0;
}