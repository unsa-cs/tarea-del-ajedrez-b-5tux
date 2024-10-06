#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);

    char** queenOnBlackSquare = superImpose(queen, blackSquare);
    char** queenOnWhiteSquare = superImpose(queen, whiteSquare);

    char** whiteAndBlack = join(whiteSquare, blackSquare);
    char** blackAndWhite = reverse(whiteAndBlack);

    char** whiteAndBlackRow = repeatH(whiteAndBlack, 4);

    char** solutionRow1 = superImpose(queen, whiteAndBlackRow);

    interpreter(solutionRow1);
}
