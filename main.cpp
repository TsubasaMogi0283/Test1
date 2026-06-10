#include <stdio.h>


int main() {
    int year = 2026; // 判定したい西暦

    // 4で割り切れる
    //if ([空欄]) {
    //year % 4 == 0
    //year % 4 == 0
    //year / 4 == 0
    //year % 4 == 0
    if (year % 4 == 0 ) {
        printf("%d年はうるう年です。\n", year);
    } else {
        printf("%d年はうるう年ではありません。\n", year);
    }

    int currentMonth = 6; // 判定したい月（例として9月
    // 2月、または4月、または6月、または9月、または11月
    // currentMonth == 2 && currentMonth == 4 && currentMonth == 6 && currentMonth == 9 && currentMonth == 11
    //currentMonth == 2 || 4 || 6 || 9 || 11
    //currentMonth == 2 || currentMonth == 4 || currentMonth == 6 || currentMonth == 9 || currentMonth == 11
    //currentMonth == 246911
    if (currentMonth == 2 || currentMonth == 4 || currentMonth == 6 || currentMonth == 9 || currentMonth == 11) {
        printf("%d月は小の月(西向く侍)です。\n", currentMonth);
    } else {
        printf("%d月は大の月（31日まである月）です。\n", currentMonth);
    }

    int adultAge = 18;
    //if (adultAge[空欄] 18) {
    if (adultAge >= 18) {
        // >
        // >=
        // =>
        // <
        printf("免許取得可能です。\n");
    } else {
        printf("まだ免許は取得できません。\n");
    }

    int age = 18;
    if (age < 3) {
        printf("入場料は【無料】です。\n");

    } else if (age < 12) { // 子供料金の条件
        //else if ( [  空欄  ] ) {
        //age >= 3 && age < 12△一応通るけどelse if の使い方的には2が正しい
        //age < 12〇
        //3 <= age < 12
        //age >= 3 || age < 12
        printf("入場料は【子供料金】です。\n");
    } else {
        printf("入場料は【大人料金】です。\n");
    }


    

    return 0;
}