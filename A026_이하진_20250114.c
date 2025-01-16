#include <stdio.h>
#include <string.h>

void isharshad(int N, int sum);

int main(){
    int x = 0, len = 0, i = 0, sum = 0;
    int N[100];
    int temp = 0; 

    printf("양의 정수를 입력하시오. ");
    scanf("%d", &x);

    temp = x;
    while (temp > 0){
        N[i] = temp % 10; // 18
        sum += N[i];
        i++;
        temp /= 10; // 1
    }

    isharshad(x, sum);

    return 0;
}

void isharshad(int N, int sum){
    if (N % sum == 0){
        printf("%d is a harshad number. True", N);
    }
    else 
        printf("%d is not a harshad number. False", N);
}