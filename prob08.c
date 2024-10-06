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

    char** blackAndWhiteRow2 = repeatH(blackAndWhite, 2);
    char** queenRow2 = join(queenOnBlackSquare, whiteSquare);
    char** row2Complete = join(blackAndWhiteRow2, join(queenRow2, blackAndWhite));

    char** queenRow3 = join(whiteSquare, queenOnBlackSquare);
    char** row3Complete = join(whiteAndBlackRow1, queenRow3);

    interpreter(row3Complete);
}
