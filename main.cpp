#include <stdio.h>

//ゴールド会員の割引率は常に 30 % 引きです。

//レギュラー会員の割引率は以下の通りです。
//利用時間が 200分 以上 の場合は 20 % 引き
//利用時間が 100分 以上 200分 未満 の場合は 10 % 引き
//それ以外（100分未満）は 割引なし（0 % ）

int main(void) {
    char rank = 'R';     
    int time = 0;
    int discount = 0;
    int baseCharge = 0;

    printf("会員ランクを入力（G:ゴールド / R:レギュラー）: ");

    //文字入力
    //scanf_s("%c", &rank, ①);
    scanf_s("%c", &rank, 1);
    //sizeof(char)
    //&rank
    //1 〇
    //NULL

    printf("利用時間を分単位で入力してください: ");
    scanf_s("%d", &time);

    //基本料金の計算（1分4円）
    baseCharge = time * 4;


	//ゴールド会員、または「レギュラーかつ100分未満」の条件は？
    //if (rank == 'G' || (rank == 'R' && ②) {
    if (rank == 'G' || (rank == 'R' && time < 100)) {
        //time <= 100
        //time < 100
        //time >= 100
        //time > 100
        //【問】ゴールドなら30%引き、レギュラー（100分未満）なら0%引き
        if (rank == 'G') {
            discount = 30;
        } else {
            discount = 0;
        }
    }
    //レギュラー会員の長時間利用の判定
    else if (time >= 200){
        //else if ([③]) {
        //time >= 200
        //time >= 100
        //time < 200
        //time < 100
        discount = 10;
    //} else if ([④]) {
    } else if (time >= 100) {
        //time >= 200
        //time >= 100
        //time < 200
        //time < 100
        discount = 20;
    } else {
        discount = 0;
    }


    // 割引後の料金を計算する正しい式は？
    //int finalCharge = [⑤];
    int finalCharge = baseCharge * (100 - discount) / 100;
    //baseCharge * (discount / 100)
    //baseCharge * (100 - discount) / 100
    //baseCharge - discount
    //baseCharge * (1 - discount)
    printf("最終料金は %d 円です。\n", finalCharge);
    return 0;
}