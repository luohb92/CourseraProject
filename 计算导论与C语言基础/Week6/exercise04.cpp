#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int max = 0;
    while (n > 0){
        int value;
        cin >> value;
        if(max < value) {
            max = value;
        }
        --n;
    }
    cout << max << endl;
    return 0;
}