#include <stdio.h>
#include <string.h>

int main(){
    int A, B, C, product;
    int i, temp[10], count[10] = {0};
    char str[10];

    printf("100보다 크거나 같고, 1000보다 작은 자연수 A, B, C를 입력하시오.\n");
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