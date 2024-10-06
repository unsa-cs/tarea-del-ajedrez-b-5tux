#include "chess.h"
#include "figures.h"

void display(){
    char** knight90 = rotateR(knight);
    char** knight180 = rotateR(knight90);
    char** knight270 = rotateR(knight180);

    char** upperKnights = join(knight, knight90);
    char** lowerKnights = join(knight180, knight270);
    
    char** fourKnights = up(upperKnights, lowerKnights);

    interpreter(fourKnights);
}
