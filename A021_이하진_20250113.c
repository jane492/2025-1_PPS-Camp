#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, i, num = 0;

    printf("��Ƽ���� ������ �Է��Ͻÿ�. ");
    scanf("%d", &N);

    int *plugs = (int *)malloc(N * sizeof(int));

    for (i = 0; i < N; i++){
        printf("%d��° ��Ƽ�ǿ��� �� ���� �÷��׸� ���� �� �ִ°�? ", i+1);
        scanf("%d", &plugs[i]);
        if (i != N-1)
            num += plugs[i] - 1;
        else
            num += plugs[i];
    } 

    printf("�ִ� %d���� ��ǻ�͸� ���� �� �� �ִ�. ", num);

    return 0;
}