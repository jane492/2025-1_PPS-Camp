#include <stdio.h>

int main(){
    int N;
    int now, i;
    double mood[2] = {1.0, 0.0}, whatmood[2][2] = {0};
    double goodper[2], badper[2];
    //[0][0]  [0][1]  [1][0]  [1][1]
    printf("�� �� ���� �������� ����� ���غ����? ");
    scanf("%d", &N);
    printf("���� �������� ����� �����? (���� �� 0, ���� �� 1) ");
    scanf("%d", &now);

    printf("���� �� ���� ���� ���� Ȯ��, ���� ���� ���� Ȯ��,\n ���� �� ���� ���� ���� Ȯ��, ���� ���� ���� Ȯ�� �Է��Ͻÿ�.\n");
    scanf("%lf %lf %lf %lf", &goodper[0], &badper[0], &badper[1], &goodper[1]);

    if (now == 1){
        mood[0] = 0.0;
        mood[1] = 1.0;
    }

    for (i = 0; i < N; i++){
        whatmood[0][0] = mood[0] * goodper[0];
        whatmood[0][1] = mood[0] * badper[0];
        whatmood[1][0] = mood[1] * goodper[1];
        whatmood[1][1] = mood[1] * badper[1];

        mood[0] = whatmood[0][0] + whatmood[1][0];
        mood[1] = whatmood[0][1] + whatmood[1][1];
    }

    printf("%.lf\n%.lf", mood[0]*1000, mood[1]*1000);
}