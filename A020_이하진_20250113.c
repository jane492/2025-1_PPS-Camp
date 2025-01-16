#include <stdio.h>

int main(){
    int station[4] = {0};
    int i, on, off, max = 0; //max 초기값 설정 주의의

    for (i = 0; i < 4; i++){
        printf("%d역의 내린 사람 수와 탄 사람 수를 입력하시오. ", i+1);
        scanf("%d %d", &off, &on);
        if (i == 0)
            station[i] = on - off;
        else
            station[i] = station[i-1] + on - off;
    }

    max = station[i];
    for (i = 0; i < 4; i++){
        if (max < station[i]){
            max = station[i];
        }
    }

    printf("기차에 사람이 가장 많을 때의 사람 수는 %d명입니다.", max);

    return 0;
}