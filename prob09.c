#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);
    char** whiteAndBlack = join(whiteSquare, blackSquare);
    char** blackAndWhite = reverse(whiteAndBlack);

    char** blackQueenOnWhiteSquare = superImpose(reverse(queen), whiteSquare);
    char** blackKingOnBlackSquare = superImpose(reverse(king), blackSquare);
    char** blackQueenRow1 = join(blackQueenOnWhiteSquare, blackSquare);
    char** blackKingRow1 = join(whiteSquare, blackKingOnBlackSquare);
    char** whiteAndBlackRow1 = repeatH(whiteAndBlack, 2);
    char** completeRow1 = join(whiteAndBlackRow1, join(blackQueenRow1, blackKingRow1));

    interpreter(completeRow1);
}
