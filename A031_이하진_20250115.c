#include <stdio.h>

int main(){
    int count = 0;
    int N, M, i;
    
    printf("���ݷ��� ���ο� ������ ���̸� �Է��Ͻÿ�. ");
    scanf("%d %d", &N, &M);

    count += N - 1;
    count += (M - 1) * N;

    printf("%d", count);
    
    return 0;
    // 2 2 - 3��
    // 2 3
    // 3 2 - 5�� 3 2 1 (2��) 1�� * 3
    // 3 3 - 8�� 3 2 1 (2��) 2�� * 3
    // 4 3 - 7�� 4 3 2 1 (3��) 2�� * 4
}