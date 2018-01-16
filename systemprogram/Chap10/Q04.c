// Q04.c
#include <stdio.h>

int main() {
    int i = 100;
    int *piData = NULL;
    int *piData2 = NULL;
    
    piData = &i;
    
    printf("piData :%p\n", piData);
    
    piData2 = piData + 1;
    
    printf("piData2 :%p\n", piData2);
    
    return 0;
}
