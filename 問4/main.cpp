#include <stdio.h>
#define CLASS_SIZE 5
#define GRADE_SIZE 4

int main() {
	const int kSchoolSize = 3;
	
	//int data[①] = { 31,31,31,30,18 };
	int data[CLASS_SIZE] = { 31,31,31,30,18 };
	int data2[5] = { 1,2,3,4 };

	printf("%d\n", data[0]);//②
	data[4] = data[1];
	printf("%d\n", data[4]);//③
	//printf("%d\n", data[CLASS_SIZE]);//④配列の範囲外アクセスについてチェック

	int tmp = data[3];
	data[1] = tmp + 5;
	data[2] = data[1];
	printf("%d", data[2]);//⑤
	printf("%d", data2[4]);//⑥

	return 0;
}