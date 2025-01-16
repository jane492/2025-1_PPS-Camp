#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int roomnum;
    int nset[100], temp, n = 0, i, count = 0;
    int check = 0;

    printf("방번호를 입력하세요. ");
    scanf("%d", &roomnum);

    temp = roomnum;
    while (1){
        if (temp > 1){
            nset[n] = temp % 10;
            temp = temp / 10;
            n++;
        }
        else
            break;
    }

    for (i = 0; i < n; i++){
        if (nset[i] != 6 && nset[i] != 9){
            count++;
        }
        else
            check++;
    }

    if (check % 2 == 1){
        count++;
    }
    count += check / 2;

    printf("%d개의 숫자 세트가 필요합니다.", count);

    return 0;
}