#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);
    char** whiteandblack = join(whiteSquare, blackSquare);
    char** blackandwhite = reverse(whiteandblack);
    char** row1 = repeatH(blackandwhite, 4);
    char** row2 = repeatH(whiteandblack, 4);
    char** mergeRow = up(row1, row2);
    char** col = repeatV(mergeRow, 2);
    interpreter(col);
}
