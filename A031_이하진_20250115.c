#include <stdio.h>

int main(){
    int count = 0;
    int N, M, i;
    
    printf("초콜렛의 가로와 세로의 길이를 입력하시오. ");
    scanf("%d %d", &N, &M);

    count += N - 1;
    count += (M - 1) * N;

    printf("%d", count);
    
    return 0;
    // 2 2 - 3번
    // 2 3
    // 3 2 - 5번 3 2 1 (2번) 1번 * 3
    // 3 3 - 8번 3 2 1 (2번) 2번 * 3
    // 4 3 - 7번 4 3 2 1 (3번) 2번 * 4
}