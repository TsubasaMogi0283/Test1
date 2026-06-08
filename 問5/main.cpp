#include <stdio.h>
#define ORIGIN_WEIGHT 75
#define PREDICTION 60
#define CONFIDENCE 15

int main() {
	bool me = true;

	printf("世の中には2種類の男がいる\n");
	if (me) {
		printf("俺\n");
	} else {
		printf("俺以外\n");
	}
	// ①何が表示されるか?
	// 俺
	// 俺以外
	// 何も表示されない
	// コンパイルエラー


	int star = 100;
	if (me = star) {
		printf("俺という存在が満点\n");

	} else {
		printf("俺はスターを超える\n");
	}
	// ②何が表示されるか?,
	// 俺という存在が満点
	// 俺はスターを超える
	// 何も表示されない
	// コンパイルエラー


	if (ORIGIN_WEIGHT <= PREDICTION + CONFIDENCE) {
		printf("重力すら俺に見惚れている\n");
	}
	else {
		printf("自信が積み重なってできた結果\n");
	}
	// ③何が表示されるか?
	// 重力すら俺に見惚れている
	// 自信が積み重なってできた結果
	// 何も表示されない
	// コンパイルエラー


	int income = 0;
	if (!income) {
		printf("下がったら、あとは上がるだけ。\n");
	} else {
		printf("現状維持は退化。\n");
	}
	// ④何が表示されるか？
	// 下がったら、あとは上がるだけ
	// 現状維持は退化
	// 何も表示されない
	// コンパイルエラー

	return 0;
}