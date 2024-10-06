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

    char** blackRookOnBlackSquare = superImpose(reverse(rook), blackSquare);
    char** blackRookRow2 = repeatH(join(blackRookOnBlackSquare, whiteSquare), 2);
    char** completeRow2 = join(blackAndWhite, join(blackRookRow2, blackAndWhite));

    char** whitePawnOnWhiteSquare = superImpose(pawn, whiteSquare);
    char** blackPawnOnBlackSquare = reverse(whitePawnOnWhiteSquare);
    char** whiteRookOnBlackSquare = superImpose(rook, blackSquare);
    char** pawnAndRookRow3 = join(whitePawnOnWhiteSquare, whiteRookOnBlackSquare);
    char** completeRow3 = join(whiteAndBlackRow1, join(pawnAndRookRow3, join(whiteSquare, blackPawnOnBlackSquare)));

    interpreter(completeRow3);
}
