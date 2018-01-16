// Q09.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// プロトタイプ宣言
void addString(char *szData1, char *szData2, char *szAddArea);

int main(void) {
    char *szData1 = "abcd";
    char *szData2 = "efgh";
    char *szAddArea = NULL;
    
    szAddArea = malloc(strlen(szData1) + strlen(szData2) + 1);
    if (szAddArea == NULL) {
        printf("mallocエラー\n");
        return -1;
    }
    
    addString(szData1, szData2, szAddArea);
    
    printf("AddString:%s<\n", szAddArea);
    
    free(szAddArea);

    return 0;
}

void addString(char *szData1, char *szData2, char *szAddArea) {
    strcpy(szAddArea, szData1);
    strcpy(szAddArea + strlen(szData1), szData2);
    
    return;
}
