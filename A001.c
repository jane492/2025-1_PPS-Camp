#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void arrange(int num[100], int n);

int main(){
    char g[100], s[100];
    int num_g[100], num_s[100], i, j, count = 0;

    fgets(g, sizeof(g), stdin);
    fgets(s, sizeof(s), stdin);

    for (i = 0; i < strlen(g) - 1; i++){
        num_g[i] = g[i] - '0';
    }

    for (i = 0; i < strlen(s) - 1; i++){
        num_s[i] = s[i] - '0';
    }

    arrange(num_g, strlen(g) - 1);
    arrange(num_s, strlen(s) - 1);

    for (i = 0; i < strlen(g) - 1; i++){
        for (j = 0; j < strlen(s) - 1; j++){
            if (num_g[i] <= num_s[j]){
                num_g[i] = 0;
                num_s[j] = 0;
                break;
            }
        }
    }

    for (i = 0; i < strlen(g) - 1; i++){
        if (num_g[i] == 0)
            count++;
        printf("%d\n", num_g[i]);
    }

    printf("Output = %d", count);
}

void arrange(int num[100], int n){
    int i, j, temp = 0; 

    for (i = 0; i < n -1; i++){
        for (j = 0; j < n - 1; j++){
            if (num[j] > num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
}