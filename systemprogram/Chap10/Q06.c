// Q06.c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char szData[] = "abcde";
    int i;
    
    printf("szData文字列の変換前：%s\n", szData);
    
    for (i = 0; i < strlen(szData); i++) {
        *(szData + i) = toupper(*(szData + i));
    }
    
    printf("szData文字列の変換後：%s\n", szData);
    
    return 0;
}
