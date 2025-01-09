#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[8];
    int i;

    scanf("%s", s);

    for (i = 0; i < strlen(s); i++){
        if (!isdigit(s[i])){
            printf("false");
            return 0;
        }
    }
    
    
    printf("true");

    return 0;
}