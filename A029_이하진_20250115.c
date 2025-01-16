#include <stdio.h>
#include <stdlib.h>

int checkrule(int door[], int n);

int main(){
    int first;
    int ndoor, i;

    printf("총 문의 개수를 입력하시오. ");
    scanf("%d", &ndoor);
    printf("첫 번째 문을 통과하기 위해 문을 연 방법을 선택하시오. (밀기: 0, 당기기: 1) ");
    scanf("%d", &first);

    int * howtoopen = (int *)malloc(ndoor * sizeof(int));
    
    for (i = 1; i < ndoor; i++){
        if (first == 0){
            if ((i+1) % 2 == 0)
                howtoopen[i] = 1;
            else
                howtoopen[i] = 0;
        }
        else {
            if((i+1) % 2 == 0)
                howtoopen[i] = 0;
            else
                howtoopen[i] = 1;
        }
    }

    checkrule(howtoopen, ndoor);
    
    return 0;
}

int checkrule(int door[], int n){
    int i, k = 1, temp;

    temp = door[2];

    while ((3*k - 1) <= n){
        if (door[(3*k) - 1] != door[2]){
            printf("가능한 경우의 수가 없네요ㅠㅠㅠ\n");
            printf("Love is open door\n");
            return 0;
        }
        k++;
    }

    for (i = 1; i < n; i++){
        printf("%d\n", door[i]);
    }
}