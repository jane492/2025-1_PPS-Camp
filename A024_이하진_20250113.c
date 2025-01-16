#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char bills[100];
    int paid[100];
    int i, j, temp = 0, n = 0, change = 0, money[3] = {0}, income = 0;

    printf("Enter the bills collected. ");

    fgets(bills, sizeof(bills), stdin);

    for (i = 0; i < strlen(bills); i++){
        if (isdigit(bills[i])){
            temp = temp * 10 + (bills[i] - '0');
        }
        else{
            paid[n] = temp;
            n++;
            temp = 0;
        }
    }
    
    for (i = 0; i < n; i++){
        if (paid[i] == 5){
            money[0]++;
        } 
        else if (paid[i] == 10){
            money[1]++;
            if (money[0] > 0)
                money[0]--;
            else{
                printf("Cannot pay change. False");
                return 0;
            }
        }
        else if (paid[i] == 20){
            money[2]++;
            if (money[1] > 0 && money[0] > 0){
                money[1]--;
                money[0]--;
            }
            else if (money[1] = 0 && money[0] >= 3)
                money[0] -= 3;
            else{
                printf("Cannot pay change. False");
                return 0;
            }
        }
    }   

    printf("Paid all Change. True");

    return 0;
}