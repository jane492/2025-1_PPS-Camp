#include <stdio.h>
#include <stdlib.h>

void descend(int *A, int N);
void ascend(int *B, int N);

int main(){
    int N, i, S = 0;

    printf("정수 배열 A와 B의 길이 N을 입력하시오. ");
    scanf("%d", &N);

    int *A = (int *)malloc(N * sizeof(int));
    int *B = (int *)malloc(N * sizeof(int));

    printf("A 배열의 숫자 %d개를 입력하시오. ", N);
    for (i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }

    printf("B 배열의 숫자 %d개를 입력하시오. ", N);
    for (i = 0; i < N; i++){
        scanf("%d", &B[i]);
    }

    descend(B, N);
    ascend(A, N);

    for (i = 0; i < N; i++){
        S += A[i] * B[i];
    }

    printf("S = A[0] x B[0] + ... + A[N-1] x B[N-1]일때,\nS의 최솟값은 %d입니다.", S);

    return 0;
}

void descend(int *A, int N){
    int i, j;

    for (i = 0; i < N - 1; i++){
        for (j = 0; j < N - i - 1; j++){
            if (A[j] < A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

void ascend(int *B, int N){
    int i, j;

    for (i = 0; i < N - 1; i++){
        for (j = 0; j < N - i - 1; j++){
            if (B[j] > B[j+1]){
                int temp = B[j];
                B[j] = B[j+1];
                B[j+1] = temp;
            }
        }
    }
}