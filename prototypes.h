//  Created by Jonathan Pinho and Vinicius Mangueira 10/07/2018.
//  Aquivo onde ficar� as prot�tipos de fun��es e structs


typedef struct Position {
    int x,y;
};

struct Snake {
    int size;
    struct Position bodySize[51];
};

struct Candy {
    struct Position *CandyPosition;
    int life;
};
