#include <stdio.h>
#include <stdlib.h>

int npeople(int k, int n);

int main(){
    int T, i, result;
    printf("Test CaseÀÇ ¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À. ");
    scanf("%d", &T);

    int * k = (int *)malloc(T * sizeof(int));
    int * n = (int *)malloc(T * sizeof(int));

    for (i = 0; i < T; i++){
        scanf("%d", &k[i]);
        scanf("%d", &n[i]);
    }

    for (i = 0; i < T; i++){
        result = npeople(k[i], n[i]);
        printf("%dÃþ %dÈ£¿¡´Â %d¸íÀÌ »ì°í ÀÖ½À´Ï´Ù.\n", k[i], n[i], result);
    }
    printf("¹º ÀÌ·± ¹Ùº¸°°Àº ¾ÆÆÄÆ® ±ÔÄ¢ÀÌ ÀÖ´Ù´Ï");
}

int npeople(int k, int n){

    if (k == 0)
        return n;
    else if (n == 1)
        return 1;
    else
        return npeople(k - 1, n) + npeople(k, n-1);

    // 0Ãþ 4È£ - 1 = 1, 2 = 2, 3 = 3, 4 = 4
    // 1Ãþ 4È£ - 1 = 1, 2 = 3, 3 = 6, 4 = 10
    // 2Ãþ 4È£ - 1 = 1, 2 = 4, 3 = 10, 4 = 20
    // kÃþ nÈ£ = (kÃþ n - 1È£) + (k-1Ãþ nÈ£)
    // 3Ãþ 4È£ = 3Ãþ 3È£ (3Ãþ 2È£ (3Ãþ 1È£ + 2Ãþ 2È£ (2Ãþ 1È£ + 1Ãþ 2È£)) + 2Ãþ 3È£) + 2Ãþ 4È£
}   
