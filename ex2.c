/**
 * 第2回課題
 * 任意の個数の文字列を入力すると、その合計と平均を表示するプログラム
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * 文字列が全て数字であれば1を，そうでなければ0を返す関数
 *
 * ちなみにisdigit(char c)は文字が数字ならば真（0以外の数字）を返し，数字以外なら0を0を返す関数
 * ここでは2桁以上の数も扱うので「文字列」が数字かどうかを判定しなければいけないので，この関数を作った
 */
int is_number(char *token) {
    int digit = 1;
    for (int i = 0; i < strlen(token); i++) {
        if (isdigit(token[i]) == 0) {
            digit = 0;
            break;
        }
    }
    return digit;
}


int main(void) {
    // Qが入力されるまで繰り返し処理をするので無限ループにしている
    while (1) {
        char str[256]; // 入力された文字列を格納するための変数
        
        // 標準入力（キーボード）から文字列を読み込むときの書き方
        // 読み込めないときはNULLが返るのでそのときはループを抜ける
        if (fgets(str, 256, stdin) == NULL) {
            break;
        }
        printf("Input Number: %s", str);
        
        // 改行文字の削除
        str[strlen(str) - 1] = '\0';
        
        // 入力文字列の処理
        // 「, 」で文字列を分割
        char *token = strtok(str, ", ");
        // Qが入力されたら終了するための処理
        if (strcmp(token, "Q") == 0) {
            puts("BYE");
            return 0;
        }
        // 数字以外のものがきたらやり直し
        if (is_number(token) == 0) {
            puts("IOERROR: Input only numbers. Ex) 1, 2, 3");
            continue;
        }
        // ここまでの処理で最初のtokenは数値であることが確定ので
        // 一旦この数値を配列に保存しておく。
        int vals[100]; // 文字列から切り出された数値を格納するための配列
        vals[0] = atoi(token);
        int index = 1; // 数値が何個切り出されたか記憶しておくための変数
        // ここから2つ目以降のtokenの処理
        // 「, 」で切り出せなくなるまで（NULLが返るまで）繰り返す
        while (token = strtok(NULL, ", ")) {
            // 数字以外のものがきたら処理を中断
            if (is_number(token) == 0) {
                puts("IOERROR: Input only numbers. Ex) 1, 2, 3");
                break;
            }
            // 数値を配列に保存しておく。
            vals[index] = atoi(token);
            index++;
        }
        // ここまでで配列に数値が入っている。
        int sum = 0;
        for (int i = 0; i < index; i++) {
            sum += vals[i];
        }
        // 結果の出力
        printf("  Sum: %d\n", sum);
        printf("  Ave: %.2f\n", (double)sum / index);
    }
    return 0;
}

