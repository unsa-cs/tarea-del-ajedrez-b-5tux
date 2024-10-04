#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);
    char** whiteandblack = join(whiteSquare,blackSquare);
    interpreter(whiteandblack);
}
