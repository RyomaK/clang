// Q03.c
#include <stdio.h>

void sizePrint(char szData[]);

int main() {
    char szData[] = "abcde";
    
    sizePrint(szData);
    
    return 0;
}

void sizePrint(char szData[]) {
    printf("%d\n", sizeof(szData));

    return;
}
