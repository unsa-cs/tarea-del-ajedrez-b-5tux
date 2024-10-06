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

    char** queenRow4 = join(join(blackSquare, queenOnWhiteSquare), blackAndWhite);
    char** row4Complete = join(blackAndWhiteRow2, queenRow4);
 
    char** whiteAndBlackRow5 = repeatH(whiteAndBlack, 2);
    char** row5Complete = join(whiteAndBlack, join(queenRow1, whiteAndBlackRow5));

    char** blackAndWhiteRow6 = reverse(whiteAndBlackRow1);
    char** row6Complete = join(blackAndWhiteRow6, queenRow2);

    char** row7Complete = join(queenRow3, whiteAndBlackRow1);

    char** row8Complete = join(join(blackAndWhite, queenRow4), blackAndWhite);

    char** chessBoard = up(up(up(up(up(up(up(row1Complete, row2Complete), row3Complete), row4Complete), row5Complete), row6Complete), row7Complete), row8Complete); 

    interpreter(chessBoard);
}
