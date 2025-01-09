#include <stdio.h>

int main(){
    int result = 0, i;
    int input[5];

    for (i = 0; i < 5; i++){
        scanf("%d", &input[i]);
        result += input[i] * input[i];
    }

    printf("%d", result % 10);

    return 0;
}