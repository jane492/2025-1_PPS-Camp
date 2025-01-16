#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void descending(int nums[], int n);

int main(){
    char cweight[100];
    int temp = 0;
    int weight[100];
    int limit, boats = 0, i, j, n = 0, count = 0;

    fgets(cweight, sizeof(cweight), stdin);

    for (i = 0; i < strlen(cweight); i++){
        if (isdigit(cweight[i])){
            temp = temp * 10 + (cweight[i] - '0');
        }
        else{
            weight[n] = temp;
            n++;
            temp = 0;
        }
    }

    scanf("%d", &limit);
    
    descending(weight, n);

    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++ ){
            if (weight[i] + weight[j] <= limit){
                if (j == n - 1){
                    weight[i] = 240;
                    weight[j] = 240;
                    count++;
                }
                else if (weight[i] + weight[j+1] > limit){
                    weight[i] = 240;
                    weight[j] = 240;
                    count++;
                }
            }
        }
    }

    for (i = 0; i < n; i++){
        if (weight[i] != 240){
            count++;
        }
    }

    printf("%d", count);
}

void descending(int nums[], int n){
    int i, j, temp;

    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (nums[j] > nums[j+1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    } 
}