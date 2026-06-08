#include <stdio.h>

int main() {
	char str[10] = "";

	//今回はKamataと入力します。
	printf("文字列を入力してください\n");
	//～～～～("%s", str);①
	scanf_s("%s", str, 10);

	//printf("%〇\n", str[1]);//②
	printf("%c\n", str[1]);//③

	//printf("%〇\n", 〇);//④ c,s,d,t⑤&str,str
	printf("%s\n", str);//⑥Kamata

	return 0;
}