#include <stdio.h>

int main(){
    int num[10];
    int i, remain[42] = {0}, count = 0;

    printf("숫자 10개를 입력하시오. ");
    
    for (i = 0; i < 10; i++){
        scanf("%d", &num[i]);
        num[i] = num[i] % 42;
        remain[num[i]]++;
    }

    for (i = 0; i < 42; i++){
        if (remain[i] > 0){
            count++;
        }
    }

    printf("%d", count);
    
    return 0;
}