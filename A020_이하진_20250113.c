#include <stdio.h>

int main(){
    int station[4] = {0};
    int i, on, off, max = 0; //max �ʱⰪ ���� ������

    for (i = 0; i < 4; i++){
        printf("%d���� ���� ��� ���� ź ��� ���� �Է��Ͻÿ�. ", i+1);
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

    printf("������ ����� ���� ���� ���� ��� ���� %d���Դϴ�.", max);

    return 0;
}