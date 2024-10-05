#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);
    char** rookSquare = superImpose(rook, blackSquare);
    char** knightSquare = superImpose(knight, blackSquare);
    char** rookAndKnight = join(rook, knight);
    char** blackAndWhite = join(blackSquare, whiteSquare);
    char** twoFiguresOnRow = superImpose(rookAndKnight, blackAndWhite);
    interpreter(twoFiguresOnRow);
}
