#include <stdio.h>

int main(void) {
    int score = 10000;
    printf("あんたのスコアは%dです。\n", score);
    if (score < 10000) {
        printf("まだ一万点に達していません。");
    } else {
        printf("おめでとう!一万点以上になりました!");
    }
    return 0;
}