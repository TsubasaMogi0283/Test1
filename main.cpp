#include <stdio.h>

int main() {

	int switchOne = 2017;
	int wiiU = -2012;
	int playStation5 = 2020;
	float ds = 2004.0f;
	float familyComputer = -1990.0f;

	printf("(Switch:%06d)\n", switchOne);
	printf("(Wii U:%06d)\n", wiiU);
	printf("(PlayStation :%-06d)\n", playStation5);
	printf("(DS:%010.3f)\n", ds);
	printf("(FamilyComputer:%-10.3f)\n", familyComputer);

	return 0;
}