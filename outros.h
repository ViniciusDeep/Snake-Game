//  Created by Jonathan Pinho and Vinicius Mangueira 10/07/2018.
//  Copyright � 2018 Jonathan. All rights reserved.

#include <stdio.h>
#include <stdlib.h>
extern char mat[10][10];
extern int x, y;

void inicializa();
void imprimir();
void gerarDoce();

void inicializa(){//Fun��o que inicializa a matriz no in�cio do programa
    int i, j;
    for(i = 0; i < 10; i++ )
        for(j = 0; j < 10; j++)
            mat[i][j] = ' ';

    mat[0][0] = '*';//Origem
    gerarDoce();
	imprimir();
}

void imprimir(){//Fun��o que imprime a matriz completa
    int i, j;
    for(i = 0; i < 10; i++){
        printf("|");
        for(j = 0; j < 10; j++){
            printf("%c",mat[i][j]);
        }
        printf("|\n");
    }
}

void gerarDoce(){
	int x1, y1;
	do{
		x1 = rand() % 10;//Gera uma coordenada aleat�ria no eixo X
		y1 = rand() % 10;//Gera uma coordenada aleat�ria no eixo Y
		if(mat[x1][y1] == ' '){
			mat[x1][y1] = '$';
			break;
		}
	}while(1);
}
