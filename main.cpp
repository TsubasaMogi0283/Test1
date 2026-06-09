#include <stdio.h>

int main() {

	int switchOne = 2017;
	int wiiU = -2012;
	int ps5 = 2020;
	float ds = 2004.0f;
	float nes = -1990.0f;

	printf("(Switch:%06d)\n", switchOne);
	printf("(Wii U:%06d)\n", wiiU);
	printf("(PlayStation :%-06d)\n", ps5);
	printf("(DS:%010.3f)\n", ds);
	printf("(ファミコン:%-10.3f)\n", nes);

	return 0;
}