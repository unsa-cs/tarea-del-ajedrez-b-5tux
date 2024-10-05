#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);
    char** rookSquare = superImpose(blackSquare, rook);
    interpreter(rookSquare);
}
