//  Created by Jonathan Pinho and Vinicius Mangueira 10/07/2018.
//  Copyright � 2018 Jonathan. All rights reserved.

#include <stdio.h>
#include "mover.h"
#include "outros.h"
#define MAT_LENGHT 10
#define MAX_WORM 100

int x = 2, y = 0;//Coordenadas da matriz
char mat[MAT_LENGHT][MAT_LENGHT];//Cria��o da matriz
char tecla = 'd';

int main(void) {
    inicializa();//Inicializa��o da Matriz
    while(1){
		movimentar();
    }
    printf("\n\n");	
	return 0;
}
