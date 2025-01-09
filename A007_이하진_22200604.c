#include <stdio.h>

int main(){
    int num[8];
    int i, result = 0;

    for (i = 0; i < 8; i++){
        scanf("%d", &num[i]);
    }

    for (i = 1; i < 8; i++){
        if (num[i] > num[i - 1]){
            result++;
        }
        else
            result--;
    }

    switch (result){
        case 7:
            printf("ascending");
            break;
        case -7:
            printf("descending");
            break;
        default:
            printf("mixed");
            break;

    }
    
    return 0;
}