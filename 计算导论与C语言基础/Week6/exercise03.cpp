#include<iostream>
using namespace std;
int main(){
    const double PI = 3.14159;
    int h, r;
    cin >> h >> r;
    double area = (r * r * h * PI) / 1000;
    int res = (int)(20 / area + 1);
    cout << res << endl;
    return 0;
}