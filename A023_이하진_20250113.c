#include <stdio.h>

int addDigits(int num);

int main(){
    int N;

    printf("input a number. ");
    scanf("%d", &N);

    while (1){
        N = addDigits(N);
        if (N < 10)
            break;
    }

    printf("Output: %d", N);
}

int addDigits(int num){
    int i, n = 0, temp, sum = 0;

    temp = num;
    while (1){
        sum += temp % 10; // 4 + 6 + 3
        temp = temp / 10; // 364 36 1 3 2 
        if (temp < 1)
            break;
    }

    return sum;
}