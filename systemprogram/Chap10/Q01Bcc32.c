// Q01.c
// bcc32対応内容：bcc32では64bitのint型はlong longではなく__int64となっているので修正。
#include <stdio.h>

int main() {
//    printf("%d\n", sizeof(long long)); // bcc32対応で削除
    printf("%d\n", sizeof(__int64)); // bcc32対応で追加
    
    return 0;
}
