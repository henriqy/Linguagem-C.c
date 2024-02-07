
#include <stdio.h>

#define N 2

void lerMat(int mat[][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &mat[i][j]);
            
        }
    }
}

void achaMaior(int mat[][N]){
    int maior = mat[0][0];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(mat[i][j] > maior){
                 maior = mat[i][j];
            }
        }
    }
    
    printf("%d", maior);
}

int main()
{
        
    int mat[N][N];
    
    lerMat(mat);
    
    achaMaior(mat);
    return 0;
}
