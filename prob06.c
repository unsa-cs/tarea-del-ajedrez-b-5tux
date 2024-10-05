#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);
    char** blackAndWhite = join(blackSquare, whiteSquare);
    char** row = repeatH(blackAndWhite, 4);

    char** rookKnight = join(rook, knight);
    char** bishopQueen = join(bishop, queen);
    char** kingBishop = join(king, bishop);
    char** knightRook = join(knight, rook);

    char** leftSideFigures = join(rookKnight, bishopQueen);
    char** rightSideFigures = join(kingBishop, knightRook);

    char** rowOfFigures = join(leftSideFigures, rightSideFigures);
    char** rowUnionFigures = superImpose(rowOfFigures, row);

    char** rowPawn = repeatH(pawn, 8); 
    interpreter(rowPawn);
}
