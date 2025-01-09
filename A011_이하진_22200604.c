#include <stdio.h>
#include <string.h>
#include <ctype.h>

void order(double percent[], int n);

int main(){
    int N, i, n = 0, max, j, highper = 0, highpernum;
    int temp = 0;
    char str[200];
    int stages[200] = {0};
    int failper[100] = {0};
    double result[200] = {0.00};

    scanf("%d", &N);
    getchar();
    fgets(str, sizeof(str), stdin);

    for (i = 0; i < strlen(str); i++){
        if (isdigit(str[i])){
            temp = temp * 10 + (str[i] - '0');
        }
        else{
            stages[n] = temp;
            n++;
            temp = 0;
        }
    }

    max = stages[0];
    for (i = 0; i < n; i++){
        if (stages[i] > max){
            max = stages[i];
        }
        failper[stages[i]]++;
    }

    /*for (i = 0; i < max + 1; i++){
        printf("%d\n", failper[i]);
    }*/

    temp = n;
    for (i = 1; i <= max; i++){
        result[i] = (double) failper[i]/ temp;
        temp -= failper[i];
        printf("%lf\n", result[i]);
    }
    
    order(result, max);

    return 0;
}

void order(double percent[], int n){
    int i, j, maxnum = 0;
    double max;

    for (i = 1; i <= n; i++){
        max = 0;
        for (j = 1; j <= n; j++){
            if (percent[j] > max){
                max = percent[j];
                maxnum = j;
            }
        }
        if (percent[maxnum] != 0 && percent[maxnum] != -1){
            printf("%d ", maxnum);
        }
        percent[maxnum] = -1;
    }

    for (i = 1; i < n; i++){
        if (percent[i] == 0){
            printf("%d ", i);
        }
    }
}
// 오..이게 되네?