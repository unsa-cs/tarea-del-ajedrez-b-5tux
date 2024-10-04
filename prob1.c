#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);
    char** fila1 = repeatH(blackSquare, 8);
    interpreter(fila1);
}
