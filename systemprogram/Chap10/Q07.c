// Q07.c
#include <stdio.h>
#include <time.h>

// プロトタイプ宣言
void printTime(struct tm *pstTm);

int main(void) {
    time_t time_tData;
    struct tm *pstTm;

    // 現在時刻を取得
    time_tData = time(NULL);

    pstTm = localtime(&time_tData); // 日本時間に変換

    printTime(pstTm);

    return 0;
}

void printTime(struct tm *pstTm) {

    printf("現在日時: ");
    printf("%4d/", pstTm->tm_year + 1900);
    printf("%2d/", pstTm->tm_mon + 1);
    printf("%2d ", pstTm->tm_mday);
    printf("%2d:", pstTm->tm_hour);
    printf("%2d:", pstTm->tm_min);
    printf("%2d", pstTm->tm_sec);

    return;
}
