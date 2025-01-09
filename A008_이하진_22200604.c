#include <stdio.h>
#include <stdlib.h>

int main(){
    int ncase, i, j, temp = 0, sum = 0;
    double average;

    scanf("%d", &ncase);

    int *students = (int *)malloc(ncase * sizeof(int));
    double *percentage = (double *)malloc(ncase * sizeof(double));

    for (i = 0; i < ncase; i++){
        scanf("%d", &students[i]);
        int *score = (int *)malloc(students[i] * sizeof(int));
        for (j = 0; j < students[i]; j++){
            scanf("%d", &score[j]);
            sum += score[j];
        }
        average = (double) sum / students[i];
        for (j = 0; j < students[i]; j++){
            if (score[j] > average)
                temp++;
        }
        percentage[i] = ((double) temp / students[i]) * 100;
        temp = 0;
        sum = 0; 
    }

    for (i = 0; i < ncase; i++){
        printf("%.3lf%%\n", percentage[i]);
    }

    return 0;
}