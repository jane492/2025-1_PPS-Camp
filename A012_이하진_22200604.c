#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isprime(int n);

int main(){
    int n, i, j = 1;
    int result[100];
    
    scanf("%d", &n);

    for (i = 2; i <= n; i++){
        if (isprime(i) == 1){
            printf("%d ", i);
        }
    }

    if (n == 0 || n == 1)
        printf("0");

    return 0;
}

int isprime(int n){
    int i, result;

    for (i = 2; i < n; i++){
        if (n % i == 0){
            return 0;
        }
    }

    return 1;
}

/*Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 0*/