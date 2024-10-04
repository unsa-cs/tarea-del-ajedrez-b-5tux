#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);
    char** whiteandblack = join(whiteSquare, blackSquare);
    char** blackandwhite = reverse(whiteandblack);
    char** row = repeatH(blackandwhite, 4);
    interpreter(row);
}
