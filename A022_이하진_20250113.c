#include <stdio.h>
#include <stdlib.h>

int main(){
    int ncall, i, Y = 0, M = 0;

    printf("이용한 통화의 개수를 입력하시오. ");
    scanf("%d", &ncall);

    int *calltime = (int *)malloc(ncall * sizeof(int));

    for (i = 0; i < ncall; i++){
        printf("%d번째 통화의 시간을 입력하시오. ", i+1);
        scanf("%d", &calltime[i]);
        Y += (calltime[i] / 30 + 1) * 10;
        M += (calltime[i] / 60 + 1) * 15;
    }

    if (Y < M)
        printf("Y %d", Y);
    else if (M < Y)
        printf("M %d", M);
    else
        printf("Y M %d", Y);
    
    return 0;
}