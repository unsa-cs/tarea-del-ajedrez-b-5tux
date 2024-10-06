#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);

    char** queenOnBlackSquare = superImpose(queen, blackSquare);
    char** queenOnWhiteSquare = superImpose(queen, whiteSquare);

    char** whiteAndBlack = join(whiteSquare, blackSquare);
    char** blackAndWhite = reverse(whiteAndBlack);

    char** whiteAndBlackRow1 = repeatH(whiteAndBlack, 3);
    char** queenRow1 = join(queenOnWhiteSquare, blackSquare);
    char** row1Complete = join(queenRow1, whiteAndBlackRow1);

    interpreter(row1Complete);
}
