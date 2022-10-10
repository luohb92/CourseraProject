#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[6];
    for (int i = 0; i < 6; i++){
        cin >> a[i];
    }
    int min = 0;
    int max = INT_MAX;
    for(int i = 0; i < 6; ++i) {
        if(a[i] % 2 == 0) {
            if (a[i] < max){
                max = a[i];
            }
        } else {
            if(a[i] > min) {
                min = a[i];
            }
        }
    }
    int res = abs(min - max);
    cout << res << endl;
    return 0;
}