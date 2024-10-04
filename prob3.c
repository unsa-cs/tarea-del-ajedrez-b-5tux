#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);
    char** whiteandblack = join(whiteSquare, blackSquare);
    char** blackandwhite = reverse(whiteandblack);
    char** col = repeatV(blackandwhite, 4);
    interpreter(col);
}
