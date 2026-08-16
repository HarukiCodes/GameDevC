// 小数計算の誤差を確認

#include <stdio.h>

int main(void) {
    float f = 0.0;
    f = f + 10.1;
    f = f + 10.1;
    printf("fの値は%f\n", f);
    return 0;
}