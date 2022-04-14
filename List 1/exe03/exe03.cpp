#include <iostream>
using namespace std;

int main(){
    int num1 = 0, num2 = 0;
    
    while( cin >> num1 >> num2){
        if( num2 < -10000 || num2 > 1000){
            cout << "Valor invalido para num2 por favor inserir numeros entre -10000 e 1000" << endl;
            break;
        }else{
            int copyNum1 = num1, cont = 0, soma = 0;
            if(num2 < 0){ //se negativo
                while( cont != abs(num2) ){
                    soma = soma + copyNum1;
                    copyNum1--;
                    cont++;
                }
            }
            else if( num2 > 0){ //se positivo
                while( cont != abs(num2) ){ 
                    soma = soma + copyNum1;
                    copyNum1++;
                    cont++; 
                }
            }else{
                soma = num1;
            }
        cout << soma << endl;   
        }
    }
    return 0;
}