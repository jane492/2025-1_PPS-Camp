#include <stdio.h>
#include <string.h>

int main(){
    int A, B, C, product;
    int i, temp[10], count[10] = {0};
    char str[10];

    printf("100���� ũ�ų� ����, 1000���� ���� �ڿ��� A, B, C�� �Է��Ͻÿ�.\n");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    product = A * B * C;

    sprintf(str, "%d", product);

    for (i = 0; i < strlen(str); i++){
        temp[i] = product % 10;
        product = product / 10;
        count[temp[i]]++; 
    }

    for (i = 0; i < 10; i++){
        printf("%d\n", count[i]);
    }

}