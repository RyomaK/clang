#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void remove_end_of_line(char *str) {
    char *p = strchr(str, (int)'\n');
    if (p != NULL) *p = '\0';
}

void remove_non_alphabet(char *str) {
    if (!isalpha(str[strlen(str) - 1])) str[strlen(str) - 1] = '\0';
}

int main(void) {
    
    int size_c = 0;
    int size_w = 0;

    FILE *fp = fopen("Lesson08_2.txt", "r");
    if (fp == NULL) {
        puts("Can't read file.");
        return -1;
    }

    char temp[1024];
    while ((fgets(temp, sizeof(temp), fp)) != NULL) {
            remove_end_of_line(temp);
            char *token = strtok(temp, " ");
            remove_non_alphabet(token);
            size_w++;
            size_c += strlen(token);
            
            while (token = strtok(NULL, " ")) {
                remove_non_alphabet(token);
                size_w++;
                size_c += strlen(token);
            }

    }
    fclose(fp);

    printf("character:%2d\n", size_c);
    printf("words:%2d\n", size_w);

    return 0;
}
