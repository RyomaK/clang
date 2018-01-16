#include <stdio.h>
#include <time.h>

void printTime(struct tm *pstTm);

int main(void) {
    time_t time_tData;
    struct tm *pstTm;
    time_tData = time(NULL);
    pstTm = localtime(&time_tData); 
		printTime(pstTm);

    return 0;
}

void printTime(struct tm *pstTm) {
	printf("%d/",pstTm->tm_year + 1900);
	printf("%d/",pstTm->tm_mon + 1);
	printf("%d/",pstTm->tm_mday);
	printf(" %d:",pstTm->tm_hour);
	printf("%d:",pstTm->tm_min);
	printf("%d",pstTm->tm_sec);
}
