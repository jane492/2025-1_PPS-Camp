#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ascend(int arr[], int n);

int main(){
    char char_arr[100];
    int temp = 0;
    int arr[100];
    int divisor;
    int return_num[100], number, i, n = 0, count = 0;

    fgets(char_arr, sizeof(char_arr), stdin);

    scanf("%d", &divisor);

    for (i = 0; i < strlen(char_arr); i++){
        if (isdigit(char_arr[i])){
            temp = temp * 10 + (char_arr[i] - '0');
        }
        else{
            arr[n] = temp;
            n++;
            temp = 0;
        }
    }

    for (i = 0; i < n; i++){
        if (arr[i] % divisor == 0){
            return_num[count] = arr[i];
            count++;
        }
    }

    ascend(return_num, count);

    for (i = 0; i < count; i++){
        printf("%d ", return_num[i]);
    }

    return 0;
}



void ascend(int arr[], int n){
    int i, j, temp;
    for (i = 0; i < n - 1; i++){ // 1 3 6 5 2
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
