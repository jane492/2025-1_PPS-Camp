#include <stdio.h>

int main(){
    int score[5][4];
    int i, j, sum[5] = {0}, maxper = 1, maxnum = 0;

    printf("�� �����ڰ� ���� �� ���� �� ������ �Է��Ͻÿ�. \n");

    for (i = 0; i < 5; i++){
        for (j = 0; j < 4; j++){
            scanf("%d", &score[i][j]);
            sum[i] += score[i][j]; 
        }
    }

    maxnum = sum[0];
    for (i = 1; i < 5; i++){
        if (sum[i] > maxnum){
            maxnum = sum[i];
            maxper = i+1;
        }
    }

    printf("%d %d", maxper, maxnum);

    return 0;
}