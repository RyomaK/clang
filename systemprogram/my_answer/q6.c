#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char szData[] = "abcde";
	int i;
	for(i=0;i<strlen(szData); i++){
		*(szData +i) = toupper(*(szData + i));
	}
	printf("szData=abcde => %s",szData);
   return 0;
}
