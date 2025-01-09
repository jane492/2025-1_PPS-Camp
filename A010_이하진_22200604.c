#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compress(char result[], char string[][1000], int n);

int main(){
    char s[1000];
    char temp[1000][1000];
    char com[1000][1000];
    char smallest[1000];
    int n, i, j, m = 0;

    scanf("%s", s);
    n = strlen(s);

    for (i = 1; i <= n; i++){
        m = n / i;
        for (j = 0; j < m; j++){
            strncpy(temp[j], s + j * i, i);
            temp[j][i] = '\0';
        }
        compress(com[i], temp, m);
    }

    strcpy(smallest, com[1]);
    for (i = 2; i < n; i++){
        if (strlen(com[i]) < strlen(smallest)){
            strcpy(smallest, com[i]);
        }
    }

    printf("%s", smallest);
    return 0;
}

void compress(char result[], char string[][1000], int n){ //ab ab ac ad
    int j, tcount = 1;
    char temp[1000] = "";

    for (j = 0; j < n; j++){
        if (strcmp (string[j], string[j+1]) == 0){
                tcount++; //3번// string[0] = string[1] = string[2] 4번 -2 3번 -1 2번 -0번번
            }
        else {
            if (tcount > 1) {
                char count_str[10];
                sprintf(count_str, "%d", tcount);
                strcat(temp, count_str);
            }
            strcat(temp, string[j]);
            tcount = 1;
        }
    }

    strcpy(result, temp);
}