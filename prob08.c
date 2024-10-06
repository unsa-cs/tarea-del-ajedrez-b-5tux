#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);

    char** queenOnBlackSquare = superImpose(queen, blackSquare);
    char** queenOnWhiteSquare = superImpose(queen, whiteSquare);

    char** whiteAndBlack = join(whiteSquare, blackSquare);
    char** blackAndWhite = reverse(whiteAndBlack);

    char** queenRow1 = join(queenOnWhiteSquare, blackSquare);

    interpreter(queenRow1);
}
