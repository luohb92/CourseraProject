#include<iostream>
using namespace std;
int main(){
  //代表A、B、C、D四人说的话说对的数量
  int a, b, c, d;
  //鄱阳湖 洞庭湖、太湖、洪泽湖的排名
  //从大到小名次分别表示为1、2、3、4
  int x, y, z, m;
  for(x = 1; x <= 4; ++x) {
    for(y = 1; y <= 4; ++y) {
      if(x != y) {
        for(z = 1; z <= 4; ++z) {
          if(z != x && z != y) {
            m = 10 - x - y - z;
            a = (y == 1) + (m == 4) + (x == 3);
            b = (m == 1) + (y == 4) + (x == 2) + (z == 3);
            c = (m == 4) + (y == 3);
            d = (x == 1) + (z == 4) + (m == 2) + (y == 3);
            if(a*b*c*d == 1) {
              cout << x << endl;
              cout << y << endl;
              cout << z << endl;
              cout << m << endl;
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}