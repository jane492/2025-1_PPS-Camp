#include <stdio.h>

int main(){
    int numRows;
    int pascal[100][100];
    int i, j;

    scanf("%d", &numRows);
    
    for (i = 0; i < numRows; i++){ 
        for (j = 0; j < i + 1; j++){ 
            if (j == 0 || i == 0){
                pascal[i][j] = 1;
            }
            else
                pascal[i][j] = pascal[i - 1][j - 1] + pascal [i - 1][j];
        }
    }

    for (i = 0; i < numRows; i++){ 
        for (j = 0; j < i + 1; j++){ 
            printf("%d", pascal[i][j]);
        }
        printf("\n");
    }
}