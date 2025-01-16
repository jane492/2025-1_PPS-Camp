#include <stdio.h>
#include <stdlib.h>

int npeople(int k, int n);

int main(){
    int T, i, result;
    printf("Test Case�� ���� �Է��Ͻÿ�. ");
    scanf("%d", &T);

    int * k = (int *)malloc(T * sizeof(int));
    int * n = (int *)malloc(T * sizeof(int));

    for (i = 0; i < T; i++){
        scanf("%d", &k[i]);
        scanf("%d", &n[i]);
    }

    for (i = 0; i < T; i++){
        result = npeople(k[i], n[i]);
        printf("%d�� %dȣ���� %d���� ��� �ֽ��ϴ�.\n", k[i], n[i], result);
    }
    printf("�� �̷� �ٺ����� ����Ʈ ��Ģ�� �ִٴ�");
}

int npeople(int k, int n){

    if (k == 0)
        return n;
    else if (n == 1)
        return 1;
    else
        return npeople(k - 1, n) + npeople(k, n-1);

    // 0�� 4ȣ - 1 = 1, 2 = 2, 3 = 3, 4 = 4
    // 1�� 4ȣ - 1 = 1, 2 = 3, 3 = 6, 4 = 10
    // 2�� 4ȣ - 1 = 1, 2 = 4, 3 = 10, 4 = 20
    // k�� nȣ = (k�� n - 1ȣ) + (k-1�� nȣ)
    // 3�� 4ȣ = 3�� 3ȣ (3�� 2ȣ (3�� 1ȣ + 2�� 2ȣ (2�� 1ȣ + 1�� 2ȣ)) + 2�� 3ȣ) + 2�� 4ȣ
}   
