#include <stdio.h>

int main() {

	int numI = 7;
	float numF = 8.0f;
	double numD = 9.0;

	//printf("整数: %①, 浮動小数点: %②, 倍精度浮動小数点: %③\n", numI, numF, numD);
	//7,8.000000,9.000000
	printf("整数: %d, 浮動小数点: %f, 倍精度浮動小数点: %lf\n", numI, numF, numD);

	
	//小数点と整数の関係
	//8
	//7.0
	printf("%d\n", static_cast<int>(numF));//⑤
	printf("%.1f\n", static_cast<float>(numI));//⑥

	return 0;
}