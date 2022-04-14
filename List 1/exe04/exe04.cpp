#include <iostream>
#include <vector>

using namespace std;

std::vector<int> fib_below_n(int n){
    int n1 = 1, n2 = 1 , aux = 0;
    vector<int> fibonnaci;
    fibonnaci.push_back(n1);
    fibonnaci.push_back(n2);
    while( aux + n1 <= n){
        aux = n1 + n2;
        n1 = n2; 
        n2 = aux;  
        fibonnaci.push_back(aux);
    }
    return fibonnaci;
}

int main() {
    int num = 0;
    vector<int> fibo;

    cin >> num;
    
    fibo = fib_below_n(num);

    cout << "{ ";
    for(int i= 0; i < fibo.size(); i++){
        if( i == fibo.size() - 1){
            cout << fibo[i];
        }else{
            cout << fibo[i] <<"; ";
        }
    }
    cout << "}";
    return 0;
}