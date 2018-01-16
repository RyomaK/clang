// Q05.c
#include <stdio.h>

int myStrlen(char *szData);

int main() {
    char szData[] = "abcde";
    
    printf("szData length = %d\n", myStrlen(szData));
    
    return 0;
}

int myStrlen(char *szData) {
    int Len;
    Len = 0;
		while(*(szData+Len) !='\0'){
			Len++;
		}
    
    return Len;
}
