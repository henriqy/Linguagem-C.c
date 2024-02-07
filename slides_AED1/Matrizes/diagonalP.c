#include <stdio.h>

#define N 10

void lerMat(int mat[][N], int l, int c){
    printf("Preencha sua matriz: \n");
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &mat[i][j]);
            
        }
    }
}

void diagonalP(int mat[][N], int l){
    
    printf("os elementos da diagonal principal sao:\n");
    
    for(int i = 0; i < l; i++){
        printf("%d ", mat[i][i]);
    }
    
}

int main(void){
    
    int mat[N][N];
    int l, c;
    printf("Digite a quantidade de linhas e colunas:\n");
    
    scanf("%d %d", &l, &c);
    
    
    lerMat(mat, l, c);
    diagonalP(mat, l);
    
}