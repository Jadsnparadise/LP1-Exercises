#include <iostream>
#include <iomanip>

using namespace std;

void percent (int total, int contTimes){
    double percent = 0.0;
    percent = (100/(double)total) * (double)contTimes;
    cout << std::setprecision(4) << percent << endl; // imprime a porcentagem na tela
}

int main(){
    int num= 0, inter1 = 0, inter2 = 0, inter3 = 0, inter4 = 0, out = 0, cont = 0;

    while ( cin >> std::ws >> num){
        if ( num >= 0 && num < 25){ //[0; 25)
            inter1++;
        }

        if ( num >= 25 && num < 50){ //[25; 50)
            inter2++;
        }
        
        if ( num >= 50 && num < 75){ //[50; 75)
            inter3++;
        }

        if ( num >= 75 && num < 100){ //[75; 100)
            inter4++;
        }

        if ( num < 0 || num >= 100){ //fora dos intervalos
            out++;
        }

        cont++;
    }

    percent (cont, inter1); //[0; 25)
    percent (cont, inter2); //[25; 50)
    percent (cont, inter3); //[50; 75)
    percent (cont, inter4); //[75; 100)
    percent (cont, out); // fora dos intervalos

    return 0;
}