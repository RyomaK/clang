// Q01.c
// bcc32�Ή����e�Fbcc32�ł�64bit��int�^��long long�ł͂Ȃ�__int64�ƂȂ��Ă���̂ŏC���B
#include <stdio.h>

int main() {
//    printf("%d\n", sizeof(long long)); // bcc32�Ή��ō폜
    printf("%d\n", sizeof(__int64)); // bcc32�Ή��Œǉ�
    
    return 0;
}
