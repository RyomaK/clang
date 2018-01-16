// Q06.c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char szData[] = "abcde";
    int i;
    
    printf("szData•¶š—ñ‚Ì•ÏŠ·‘OF%s\n", szData);
    
    for (i = 0; i < strlen(szData); i++) {
        *(szData + i) = toupper(*(szData + i));
    }
    
    printf("szData•¶š—ñ‚Ì•ÏŠ·ŒãF%s\n", szData);
    
    return 0;
}
