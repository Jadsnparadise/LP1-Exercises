#include <iostream>

using namespace std;

std::pair <size_t ,size_t> min_max( int V[], size_t n ){
    int maior = V[0] , menor = V[0], maiorSpot = 0, menorSpot = 0;
    for(int i = 1; i < n; i++){
        if( V[i] >= V[maiorSpot]){
            maiorSpot = i;
        }
        if( V[i] < V[menorSpot] ){
            menorSpot = i;
        }
    }
    std::pair <int,int> menor_maior = make_pair(menorSpot,maiorSpot);

    return menor_maior;
}

int main() {
    int n;
    cin >> n;
    int vetor[n];
    for( int i = 0; i < n; i++){
        cin >> vetor[i];
    }
    
    cout << "{";
    std::pair <int,int> men_mai = min_max( vetor, n );
    cout << men_mai.first << "," << men_mai.second;
    cout << "}";
    return 0;
}