// Q01.c
// bcc32‘Î‰“à—eFbcc32‚Å‚Í64bit‚ÌintŒ^‚Ílong long‚Å‚Í‚È‚­__int64‚Æ‚È‚Á‚Ä‚¢‚é‚Ì‚ÅC³B
#include <stdio.h>

int main() {
//    printf("%d\n", sizeof(long long)); // bcc32‘Î‰‚Åíœ
    printf("%d\n", sizeof(__int64)); // bcc32‘Î‰‚Å’Ç‰Á
    
    return 0;
}
