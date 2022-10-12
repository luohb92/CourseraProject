#include <iostream>
using namespace std;
int main() {
  char str[80];
  int numa = 0, nume = 0, numi = 0, numo = 0, numu = 0;
  cin.getline(str, 80);
  for (int i = 0; str[i] != '\0'; ++i) {
    if (str[i] == 'a') {
      ++numa;
    } else if (str[i] == 'e'){
      ++nume;
    } else if (str[i] == 'i') {
      ++numi;
    } else if (str[i] == 'o') {
      ++numo;
    } else if (str[i] == 'u') {
      ++numu;
    }
  }
  cout << numa << " " << nume << " " << numi  << " " << numo  << " "<< numu << endl;
  return 0;
}
