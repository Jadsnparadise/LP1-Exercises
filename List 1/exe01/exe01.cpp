#include <iostream>
using namespace std;

int main() {
  int entry = 5, auxLoop = 0, cont = 0, num = 0;

  for( int i = 0; i < 5; i++){
    cin >> num;
    if( num < 0){
      cont++;
    }
  }

  cout << cont << endl;
  
  return 0;
}