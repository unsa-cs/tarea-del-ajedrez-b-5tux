#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);
    char** fila1 = repeatH(blackSquare, 8);
    char** fila2 = repeatH(whiteSquare, 7);
    interpreter(fila1);
    interpreter(fila2);
}
