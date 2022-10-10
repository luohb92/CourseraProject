#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << n / 100 << endl;
    n %= 100;
    cout << n / 10 << endl;
    n %= 10;
    cout << n << endl;
    return 0;
}