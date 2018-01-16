// Q08.c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *pInFile = NULL; // 読み込みファイルのファイルポインタ
    size_t size_tFileSize = 0; // 読み込みファイルのサイズ

    if (argc != 2) {
        printf("引数の数が違います。\n");
        return -1;
    }
    
    pInFile = fopen(argv[1], "rb"); // 読み込みファイルのオープン
    if (pInFile == NULL) {
        printf("InFileのfopenがNULLをリターン。\n");
        return -1;
    }
    
    // ファイルのサイズを調べる
    fseek(pInFile, 0, SEEK_END); // ファイルの読み込み位置を末尾にセット
    size_tFileSize = ftell(pInFile); // 末尾のバイト位置（ファイルサイズ）を取得
    printf("ファイルのサイズ：%dバイト\n", size_tFileSize);
    
    fclose(pInFile);
    
    return 0;
}
