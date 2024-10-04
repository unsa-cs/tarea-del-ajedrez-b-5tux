#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);
    char** whiteandblack = join(whiteSquare,blackSquare);
    char** row = repeatH(whiteandblack, 4); 
    interpreter(row);
}
