#include <iostream>

using namespace std;

struct Ponto {
 int x; // ! < coordenada X do ponto.
 int y; // ! < coordenada y do ponto.
 // Construtor padrão
 Ponto ( int xi = 0, int yi = 0 ) : x{xi}, y{yi} // copia args para os campos x e y
{ /* nada */ }
};

//Organiza os pontos para o R1 sempre ser o menor
void organize_pts ( Ponto &R1, Ponto &R2, Ponto &P ){
    int auxX = R1.x, auxY = R1.y;
    if(R1.x > R2.x){
        R1.x = R2.x;
        R2.x = auxX;       
    }
    if (R1.y > R2.y){
        R1.y = R2.y;
        R2.y = auxY;
    }
}

//Determina se o retangulo é inválido, se não, se o ponto está dentro, na borda ou fora da figura.
void pt_in_rect ( Ponto &R1, Ponto &R2, Ponto &P ){
    if(R1.x == R2.x && R1.y == R2.y){
       cout << "Invalid" << endl;
    }else{
        organize_pts(R1,R2,P); //Como o retangulo é válido, podemos organizar os pontos caso necessário.
        
        if((P.x > R1.x && P.x < R2.x) && (P.y > R1.x && P.y < R2.y)){
            cout << "Inside" << endl; 
        }
        else if(P.x < R1.x || P.x > R2.x || P.y < R1.y || P.y > R2.y){
            cout << "Outside" << endl;
        }
        else{
            cout << "Border" << endl;
        }
    }
}

int main() {
    Ponto ie, sd, p; //superior esquerdo, superior direito, ponto.
    while(cin >>  std::ws >> ie.x >> ie.y >> sd.x >> sd.y >>p.x >> p.y ){
        pt_in_rect(ie,sd,p); 
    }

}