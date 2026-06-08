#include <stdio.h>


int main() {
    int year = 2024; // 判定したい西暦

    // 4で割り切れて（かつ）100で割り切れない
    //if ([空欄]) {
    //year % 4 == 0 || year % 100 != 0
    //year % 4 == 0 && year % 100 != 0〇
    //year / 4 == 0 && year / 100 != 0
    //year % 4 == 0 && year % 100 == 0
    if (year % 4 == 0 && year % 100 != 0) {
        printf("%d年はうるう年です。\n", year);
    } else {
        printf("%d年はうるう年ではありません。\n", year);
    }

    int currentMonth = 6; // 判定したい月（例として9月
    // 2月、または4月、または6月、または9月、または11月
    // month == 2 && month == 4 && month == 6 && month == 9 && month == 11
    //month == 2 || 4 || 6 || 9 || 11
    //month == 2 || month == 4 || month == 6 || month == 9 || month == 11
    //month == 246911
    if (currentMonth == 2 || currentMonth == 4 || currentMonth == 6 || currentMonth == 9 || currentMonth == 11) {
        printf("%d月は小の月(西向く侍)です。\n", currentMonth);
    } else {
        printf("%d月は大の月（31日まである月）です。\n", currentMonth);
    }

    return 0;
}