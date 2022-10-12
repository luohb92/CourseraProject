#include<iostream>
using namespace std;
int main(){
    //最好的车
    int best;
    for (best = 1; best <= 4; best++){
        //a , b c d 记录四位专家的话
        bool a = (best == 2);
        bool b = (best == 4);
        bool c = !(best == 3);
        bool d = !b;
        if(a + b + c + d != 1) {
            continue;
        }
        cout << best << endl;
        if (a){
            cout << "A" << endl;
        } else if (b){
           cout << "B" << endl;
        } else if(c) {
            cout << "C" << endl;
        } else {
            cout << "D" << endl;
        }
    }
    return 0;
}