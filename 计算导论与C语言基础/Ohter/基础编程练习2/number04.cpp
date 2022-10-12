/**
 * 骑车与走路
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i) {
        int walkTime = (int)(a[i] / 1.2);
        int bikeTime = 27 + 23 + (int)(a[i] / 3);
        if(walkTime < bikeTime) {
            cout << "Walk" << endl;
        } else if(walkTime > bikeTime){
            cout << "Bike" << endl;
        } else {
            cout << "All" << endl;
        }
    }
    return 0;
}