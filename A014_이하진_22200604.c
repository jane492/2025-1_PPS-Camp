#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char str[100];
    int nums[100];
    int start, range;
    int i, n = 0, temp = 0, count = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; i < strlen(str); i++){
        if (isdigit(str[i])){
            temp = temp * 10 + (str[i] - '0'); 
        }
        else {
            nums[n] = temp;
            n++;
            temp = 0;
        }
    }

    for (i = 0; i < n; i++){
        if (nums[i] == nums[i+1] - 1){
            start = nums[i]; 
            count++;
            if (i == (n - 1)){
                if (count != 0){
                    printf("%d->%d ", start - (count - 1), start + 1);
                }
            }
        } 
        else {
            if (count != 0){
                printf("%d->%d ", start - (count - 1), start + 1);
            }
            count = 0;
        }
    }
}