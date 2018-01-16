#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addString(char *szData1, char *szData2, char *szAddArea);

int main(void) {
    char *szData1 = "abcd";
    char *szData2 = "efgh";
    char *szAddArea = NULL;
    
    szAddArea = malloc(strlen(szData1) + strlen(szData2) + 1);
    if (szAddArea == NULL) {
        printf("malloc-error\n");
        return -1;
    }
    
    addString(szData1, szData2, szAddArea);
    
    printf("AddString:%s<\n", szAddArea);
    
    free(szAddArea);

    return 0;
}

void addString(char *szData1, char *szData2, char *szAddArea) {
	int len1 = strlen(szData1);
	int len2 = strlen(szData2);
	char copy[len1+len2+1] ;
	strcpy(copy,szData1);
	strcpy(copy+len1,szData2);
	strcpy(szAddArea,copy);
} 
