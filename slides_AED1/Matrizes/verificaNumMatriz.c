#include <stdio.h>

#define N 10

void lerMat(int mat[][N], int l, int c){
    printf("Preenche sua matrizL \n");
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &mat[i][j]);
            
        }
    }
    
}

int verificaNum(int mat[][N], int l, int c, int *num){
    
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(*num == mat[i][j]){
                return 1;
            }
        }
    }
    
    return 0;
}

int main(void){
    int mat[N][N];
    int l, c;
    printf("Digite a quanitade de linhas e colunas da matriz: \n");
    scanf("%d %d", &l, &c);
    
    lerMat(mat, l, c);
    
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    int achou = verificaNum(mat, l, c, &num);
        
    if(achou){
        printf("O numero existe na matriz!");
    }else{
        printf("O numero nao existe na matriz");
    }
    
    return 0;
}