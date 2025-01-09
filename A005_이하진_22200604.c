#include <stdio.h>
#include <string.h>
#include <ctype.h>

int valid(char skill[], char skill_trees[]);

int main(){
    char skill[26];
    char skill_trees[26][20];
    int i, len, count = 0;

    scanf("%s", skill);
    getchar();

    printf("%d\n", strlen(skill));

    while(1){
        scanf("%s", skill_trees[i]);
        if (strcmp(skill_trees[i], "0") == 0){
            break;
        }

        if (valid(skill, skill_trees[i]) == 1){
            count++;
        }
        i++;
    }

    printf("%d", count);
}

int valid(char skill[], char skill_trees[]){
    int i, j, check = 0;

    for (i = 0; i < strlen(skill_trees); i++) {
        for (j = 0; j < strlen(skill); j++) {
            if (skill_trees[i] == skill[j]) {
                if (j != check) {
                    return 0;  // 선행 스킬 순서가 틀리면 0 반환
                }
                check++;
                break;
            }
        }
    }
    return 1;

}