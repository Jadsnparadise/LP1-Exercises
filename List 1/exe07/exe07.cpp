#include <iostream>

using namespace std;

enum location_t : int { INSIDE =0, BORDER =1, OUTSIDE =2 };

struct Ponto {
 int x; // ! < coordenada X do ponto.
 int y; // ! < coordenada y do ponto.
 // Construtor padrão
 Ponto ( int xi = 0, int yi = 0 ) : x{xi}, y{yi} // copia args para os campos x e y
{ /* nada */ }
};

location_t pt_in_rect ( const Ponto &R1, const Ponto &R2, const Ponto &P ){
    
    if((P.x > R1.x && P.x < R2.x) && (P.y > R1.x && P.y < R2.y)){
        return INSIDE;
    }
    else if(P.x < R1.x || P.x > R2.x || P.y < R1.y || P.y > R2.y){
        return OUTSIDE;
    }
    else{
        return BORDER;
    }
}

int main() {
    Ponto ie(2,2), sd(9,7), p(4,2); //superior esquerdo, superior direito, ponto.
    cout << pt_in_rect(ie,sd,p) << endl;
}