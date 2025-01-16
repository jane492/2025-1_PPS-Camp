#include <stdio.h>
#include <stdlib.h>

int checkrule(int door[], int n);

int main(){
    int first;
    int ndoor, i;

    printf("�� ���� ������ �Է��Ͻÿ�. ");
    scanf("%d", &ndoor);
    printf("ù ��° ���� ����ϱ� ���� ���� �� ����� �����Ͻÿ�. (�б�: 0, ����: 1) ");
    scanf("%d", &first);

    int * howtoopen = (int *)malloc(ndoor * sizeof(int));
    
    for (i = 1; i < ndoor; i++){
        if (first == 0){
            if ((i+1) % 2 == 0)
                howtoopen[i] = 1;
            else
                howtoopen[i] = 0;
        }
        else {
            if((i+1) % 2 == 0)
                howtoopen[i] = 0;
            else
                howtoopen[i] = 1;
        }
    }

    checkrule(howtoopen, ndoor);
    
    return 0;
}

int checkrule(int door[], int n){
    int i, k = 1, temp;

    temp = door[2];

    while ((3*k - 1) <= n){
        if (door[(3*k) - 1] != door[2]){
            printf("������ ����� ���� ���׿�ФФ�\n");
            printf("Love is open door\n");
            return 0;
        }
        k++;
    }

    for (i = 1; i < n; i++){
        printf("%d\n", door[i]);
    }
}