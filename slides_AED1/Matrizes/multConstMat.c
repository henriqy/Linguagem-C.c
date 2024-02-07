#include <stdio.h>

#define N 10

void lerMat(int mat[][N], int l, int c){
    printf("Preenche sua matriz\n");
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &mat[i][j]);
            
        }
    }
    
}

void multiplica(int mat[][N], int l, int c, int newMat[N][N]){
    
    int multi;
    printf("Escolha uma constante para multiplicar a matriz: ");
    scanf("%d", &multi);
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            
            newMat[i][j] = multi * mat[i][j];
        }
    }
    
}

int main(void){
    int mat[N][N];
    int newMat[N][N];
    
    int l, c;
    
    printf("Digite a quantidade de linhas e colunas:\n");
    scanf("%d %d", &l, &c);
    
    lerMat(mat, l, c);
    multiplica(mat, l, c, newMat);
    
    printf("Sua nova matriz eh: \n");
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", newMat[i][j]);
        }
        printf("\n");
    }
    
    
    
}