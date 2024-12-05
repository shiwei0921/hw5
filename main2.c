#include <stdio.h>

int main() {
    double PI = 0;
    double sum = 0;

    for (int i = 0; i < 1000000; i++) {
        double Odd = 2.0 * i + 1.0; // 生成分母（奇數）
        if (i % 2 == 0) { // 偶數索引：加
            sum += 4.0 / Odd;
        } else { // 奇數索引：減
            sum -= 4.0 / Odd;
        }
    }

    PI = sum;

    // 輸出計算結果
    printf("PI = %.10f\n", PI);

    return 0;
}
