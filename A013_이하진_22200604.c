#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[100];
    int nums[100] = {0};
    int result[100] = {0};
    int i, n = 0, temp = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; i < strlen(str); i++){
        if (isdigit(str[i])){
            temp = temp * 10 + (str[i] - '0');
        }
        else{
            nums[n] = temp;
            n++;
            temp = 0;
        }
    }

    for (i = 0; i < n; i++){
        result[nums[i]]++;
    }

    for (i = 0; i < n; i++){
        if (result[nums[i]] == 1){
            printf("%d ", nums[i]);
        }
    }

    return 0;
}