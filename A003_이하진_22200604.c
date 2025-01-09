#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    int digits[100];
    int i, n, temp;
    
    fgets(input, sizeof(input), stdin);

    n = strlen(input) - 1;

    for (i = 0; i < n; i++){
        digits[i] = input[i] - '0';
    }

    n = n - 1;

    digits[n]++;

    if (digits[n] == 10){
        while (digits[n] == 10){
            digits[n - 1]++;
            digits[n] = 0;
            n--;
        }
        temp = strlen(input) - 1;
        if (digits[0] == 0){
            digits[0] = 1;
            temp++;
            for (i = 1; i < temp; i++){
                digits[i] = 0;
            }
        }
    }

    for(i = 0; i < temp; i++){
        printf("%d", digits[i]);
    }
}