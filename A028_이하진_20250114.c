#include <stdio.h>
#include <string.h>

int main(){
    char A[100], B[100];
    int result[100] = {0};
    int lenA, lenB, maxlen, i, n;

    printf("두 정수를 입력하시오. \n");
    scanf("%s %s", A, B);

    lenA = strlen(A);
    lenB = strlen(B);
    maxlen = lenA > lenB ? lenA : lenB;

    for (i = 0; i < maxlen; i++){ // 54321 4523 // maxlen = 5
        if (((A[strlen(A) - (i+1)] - '0') + (B[strlen(B) - (i+1)] - '0')) >= 10){
            result[i+1]++;
            result[i] += ((A[strlen(A) - (i+1)] - '0') + (B[strlen(B) - (i+1)] - '0')) - 10;
        }
        else
            result[i] += ((A[strlen(A) - (i+1)] - '0') + (B[strlen(B) - (i+1)] - '0')); 
    }
    
    if (result[maxlen] != 0){ 
        maxlen++;
    }

    for (i = maxlen - 1; i >= 0; i--){
        printf("%d", result[i]);
    }

    return 0;
}