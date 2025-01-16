#include <stdio.h>

void isPowerofFour(double n);

int main(){
    double N, output;

    printf("Enter a number. ");
    scanf("%lf", &N);

    isPowerofFour(N);

    return 0;
}

void isPowerofFour(double n){ // 16 64
    if (n == 1){
        printf("True");
    }
    else if (n < 1){
        printf("False");
    }
    else
        isPowerofFour(n / 4);
}
