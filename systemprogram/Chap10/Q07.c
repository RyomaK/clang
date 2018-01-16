// Q07.c
#include <stdio.h>
#include <time.h>

// �v���g�^�C�v�錾
void printTime(struct tm *pstTm);

int main(void) {
    time_t time_tData;
    struct tm *pstTm;

    // ���ݎ������擾
    time_tData = time(NULL);

    pstTm = localtime(&time_tData); // ���{���Ԃɕϊ�

    printTime(pstTm);

    return 0;
}

void printTime(struct tm *pstTm) {

    printf("���ݓ���: ");
    printf("%4d/", pstTm->tm_year + 1900);
    printf("%2d/", pstTm->tm_mon + 1);
    printf("%2d ", pstTm->tm_mday);
    printf("%2d:", pstTm->tm_hour);
    printf("%2d:", pstTm->tm_min);
    printf("%2d", pstTm->tm_sec);

    return;
}
