#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, i, num = 0;

    printf("멀티탭의 개수를 입력하시오. ");
    scanf("%d", &N);

    int *plugs = (int *)malloc(N * sizeof(int));

    for (i = 0; i < N; i++){
        printf("%d번째 멀티탭에는 몇 개의 플러그를 꽃을 수 있는가? ", i+1);
        scanf("%d", &plugs[i]);
        if (i != N-1)
            num += plugs[i] - 1;
        else
            num += plugs[i];
    } 

    printf("최대 %d대의 컴퓨터를 연결 할 수 있다. ", num);

    return 0;
}