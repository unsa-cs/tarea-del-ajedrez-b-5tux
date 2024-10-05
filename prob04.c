#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);
    char** rookSquare = superImpose(rook, blackSquare);
    char** knightSquare = superImpose(knight, blackSquare);
    char** rookAndKnight = join(rook, knight);
    interpreter(rookAndKnight);
}
