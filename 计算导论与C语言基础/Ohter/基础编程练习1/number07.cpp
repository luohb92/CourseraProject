/**
 * 奇数求和
*/
#include<iostream>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    int res = 0;
    for(int i = m; i <= n; ++i) {
        if(i % 2 == 1) {
            res += i;
        }
    }
    cout << res << endl;
    return 0;
}