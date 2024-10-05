#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);
    char** blackAndWhite = join(blackSquare, whiteSquare);
    char** rookKnight = join(rook, knight);
    char** bishopQueen = join(bishop, queen);
    char** leftSideFigures = join(rookKnight, bishopQueen);
    interpreter(leftSideFigures);
}
