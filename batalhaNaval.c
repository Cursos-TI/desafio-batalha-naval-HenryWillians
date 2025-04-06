#include <stdio.h>

#define LINHA 10
#define COLUNA 10
#define L_ATAQUE 3
#define C_ATAQUE 5

int main () {

    char tabuleiro[LINHA][COLUNA];
    char linha[LINHA] = {'A', 'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L'};
    int coluna[COLUNA] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char cruz[L_ATAQUE][C_ATAQUE], triangulo[L_ATAQUE][C_ATAQUE], losango[L_ATAQUE][C_ATAQUE];


    //construção do tabuleiro
    for (int i = 0; i < LINHA; i ++){
            
            for (int j = 0; j < COLUNA; j++){
                tabuleiro[i][j] = '0';                
            }
        }

    // contrução e impressão dos ataques

    //cruz
    printf("Ataque em cruz\n\n");
    for(int i = 0; i < L_ATAQUE; i++){
        for (int j = 0; j < C_ATAQUE; j++){
            if(i == 1 || j ==2){
                cruz[i][j] = '1';
            }else {
                cruz[i][j] = '0';
            }
            printf("%c ",cruz[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    //triangulo

    printf("Ataque em trangulo\n");

    for(int i = 0; i < L_ATAQUE; i++){
        for (int j = 0; j < C_ATAQUE; j++){
            if (i == 2 || j == 2){
                triangulo[i][j] = '1';                
            }else if ((i == 1 && j == 1) || (i == 1 && j == 3)){
                triangulo[i][j] = '1';
            }else {
                triangulo[i][j] = '0';
            }
            printf("%c ",triangulo[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    //losango

    printf("Ataque em losango\n");

    for(int i = 0; i < L_ATAQUE; i++){
        for (int j = 0; j < C_ATAQUE; j++){
            if (j == 2){
                losango[i][j] = '1';                
            }else if ((i == 1 && j == 1) || (i == 1 && j == 3)){
                losango[i][j] = '1';
            }else {
                losango[i][j] = '0';
            }
            printf("%c ",triangulo[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    //alocação dos navios

    for (int x = 2; x < 5; x++){
        tabuleiro[1][x] = '3';
        printf("%c ", tabuleiro[1][x]);
    }
    printf("\n");

    for (int y = 7; y <= 9; y++ ){
        tabuleiro[y][6] = '3';
        printf("%c ", tabuleiro[y][6]);
    }

    for (int bx = 4, by = 1; 
        bx <= 7, by <= 3; 
        bx++, by++){
        tabuleiro[bx][by] = '3';
    }

    for (int bx = 2, by = 7; 
        bx <= 4, by >= 5; 
        bx++, by--){
        tabuleiro[bx][by] = '3';
    }

    //exibir tabuleiro preenchido

    printf("\n\n MOSTRAR TABULEIRO \n\n");
    printf("  ");
    for (int x = 0; x < LINHA; x++){
    printf("%c ", linha[x]);
    }
    printf("\n");
    for (int i = 0; i < LINHA; i++){
        printf("%c ", coluna[i]);
        for (int j = 0; j < COLUNA; j++){
            printf("%c ",tabuleiro[i][j]);
        }
        printf("\n");
    } 

    //tabuleiro com os ataques

    //cruz

    printf("Ataque da Cruz\n");

    int inicioCruzLinha = 3, inicioCruzColuna = 2;

    for (int i = 0; i < L_ATAQUE; i++){
        for (int j = 0; j < C_ATAQUE; j++){
            tabuleiro[inicioCruzLinha + i][inicioCruzColuna + j] = cruz[i][j];
            if (cruz[i][j] == '1'){
            tabuleiro[inicioCruzLinha + i][inicioCruzColuna + j] = '5' ;
            }
        }
    }

    printf("\n\n MOSTRAR TABULEIRO \n\n");
    printf("  ");
    for (int x = 0; x < LINHA; x++){
    printf("%c ", linha[x]);
    }
    printf("\n");
    for (int i = 0; i < LINHA; i++){
        printf("%c ", coluna[i]);
        for (int j = 0; j < COLUNA; j++){
            printf("%c ",tabuleiro[i][j]);
        }
        printf("\n");
    } 

    //triangulo

    printf("Ataque do triangulo\n\n");

    int iniciotrianguloLinha = 0, iniciotrianguloColuna = 1;

    for (int i = 0; i < L_ATAQUE; i++){
        for (int j = 0; j < C_ATAQUE; j++){
            tabuleiro[iniciotrianguloLinha + i][iniciotrianguloColuna + j] = triangulo[i][j];
            if (triangulo[i][j] == '1'){
            tabuleiro[iniciotrianguloLinha + i][iniciotrianguloColuna + j] = '5' ;
            }
        }
    }

    printf("\n\n MOSTRAR TABULEIRO \n\n");
    printf("  ");
    for (int x = 0; x < LINHA; x++){
    printf("%c ", linha[x]);
    }
    printf("\n");
    for (int i = 0; i < LINHA; i++){
        printf("%c ", coluna[i]);
        for (int j = 0; j < COLUNA; j++){
            printf("%c ",tabuleiro[i][j]);
        }
        printf("\n");
    } 

    //losango

    printf("Ataque do losango\n\n");

    int iniciolosangoLinha = 7, iniciolosangoColuna = 0;

    for (int i = 0; i < L_ATAQUE; i++){
        for (int j = 0; j < C_ATAQUE; j++){
            tabuleiro[iniciolosangoLinha + i][iniciolosangoColuna + j] = losango[i][j];
            if (losango[i][j] == '1'){
            tabuleiro[iniciolosangoLinha + i][iniciolosangoColuna + j] = '5' ;
            }
        }
    }

    printf("\n\n MOSTRAR TABULEIRO \n\n");
    printf("  ");
    for (int x = 0; x < LINHA; x++){
    printf("%c ", linha[x]);
    }
    printf("\n");
    for (int i = 0; i < LINHA; i++){
        printf("%c ", coluna[i]);
        for (int j = 0; j < COLUNA; j++){
            printf("%c ",tabuleiro[i][j]);
        }
        printf("\n");
    } 
return 0;
}