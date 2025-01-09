#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    int i, pcount = 0, ycount = 0;

    scanf("%s", s);

    for (i = 0; i < strlen(s); i++){
        if (s[i] == 'p' || s[i] == 'P'){
            pcount++;
        }
        else if (s[i] == 'y' || s[i] == 'Y'){
            ycount++;
        }
    }

    if ((pcount == 0 && ycount == 0) || (pcount == ycount)){
        printf("True");
    }
    else
        printf("False");

    return 0;
}