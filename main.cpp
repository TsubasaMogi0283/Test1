#include <stdio.h>

int main() {

    int score = 85; // テストするスコア

    printf("あなたの評価：");

    // 順序に注目！
    if (score >= 60) {
        printf("B判定（合格）\n");
    } else if (score >= 80) {
        printf("A判定（優秀！）\n");
    } else {
        printf("C判定（不合格）\n");
    }
	return 0;
}