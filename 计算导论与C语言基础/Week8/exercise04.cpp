#include<iostream>
using namespace std;
int main(){
    int N, K;
    cin >> N >> K;
    double price = 200;
    for(int i = 1; i <= 20; ++i) {
        if( N * i > price) {
            cout << i << endl;
            return 0;
        }
        price = price * (1 + (double)K / 100);
    }
    cout << "Impossible" << endl;
    return 0;
}