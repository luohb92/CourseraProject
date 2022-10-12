#include<iostream>
using namespace std;
int main(){
    int a[6];
    for(int i = 0; i < 6; ++i) {
        cin >> a[i];
    }
    int res = 0;
    for(int i = 1; i < 6; ++i) {
        if(a[i] < a[0]) {
            res += a[i];
        }
    }
    cout << res << endl;
    return 0;
}