#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);
    char** blackAndWhite = join(blackSquare, whiteSquare);
    char** whiteAndBlack = reverse(blackAndWhite);
    char** emptyBoard = up(blackAndWhite, whiteAndBlack);  

    char** knight90 = rotateR(knight);
    char** knight180 = rotateR(knight90);
    char** knight270 = rotateR(knight180);

    char** upperKnights = join(knight, knight90);
    char** lowerKnights = join(knight180, knight270);
    char** fourKnights = up(upperKnights, lowerKnights);

    char** knightBoard = superImpose(fourKnights, emptyBoard);

    interpreter(knightBoard);
}
